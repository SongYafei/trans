#include "client.h"
#include "clientreconthread.h"
#include <ctime>
Client::Client(QObject *parent) :
    QTcpSocket(parent)
{
	tcpSocket = new QTcpSocket(this);
	procBar = NULL;
	statusInfo = NULL;
	isTransing = false;
	connect(tcpSocket, SIGNAL(readyRead()),
			this, SLOT(getMsgFromServer()));
	connect(tcpSocket, SIGNAL(disconnected()),
			this, SLOT(reConnect()));
}
bool Client::reConnect()
{
	QString info = tr("\r\nClient now disconnected from server.\r\n")+
				tr("Try connect to server at %1:%2.")
					.arg(servAddr).arg(servPort);
	qDebug() << info;
	statusInfo->insertPlainText(info);
	QString disInfo = tr("\r\nRetry to Connect to server in 5 second.");
	qDebug() << disInfo;
	ClientReconThread *ct = new ClientReconThread(tcpSocket,
												  servAddr,servPort.toUInt(),
												  statusInfo, 0);

	connect(ct, SIGNAL(finished()), this, SLOT(doSend()));
	ct->start();
	return true;
}
void Client::getMsgFromServer()
{
	static int id = 0;
	qDebug() << (QString(tcpSocket->readAll())+" %1").arg(++id);
	isTransing = false;
}
bool Client::setServInfo(QString saddr, QString sport)
{
	if (saddr == servAddr && sport == servPort)
	{
		return false;
	}
	servAddr = saddr;
	servPort = sport;
	return true;
}
void Client::setStatusInfo(QPlainTextEdit *si)
{
	statusInfo = si;
}
void Client::setSpeedLabel(QLabel *sl)
{
	transSpeed = sl;
	transSpeed->setText(tr("0 kb/s"));
}
void Client::setFileSrvAddr(QLineEdit *fs)
{
	fileServAddr = fs;
}
void Client::setProcBarCon(QProgressBar *pb)
{
	procBar = pb;
	procBar->setRange(0, 100);
	procBar->setValue(0);
}
QString Client::getTcpHeader()
{
	QString filePath = fileServAddr->text();
	int len = filename.size()-1;
	while (len >= 0)
	{
		if ( filename.at(len) == '\/' )
		{
			break;
		}
		--len;
	}
	if (len >= 0)
	{
		while (++len < filename.size())
			filePath += filename.at(len);
	}
	else filePath += filename;
	filePath += "\r\n";
	filePath += tr("%1\r\n").arg(fileTransSize);
	filePath += tr("%1\r\n").arg(fileSize);
	return filePath;
}
int Client::doSend()
{
	QString filePath = fileServAddr->text();
	QString info = tr("Client now connecting to server.\r\n");
	info += tr("Addr: ") + servAddr + "\r\n";
	info += tr("Port: ") + servPort + "\r\n";
	info += tr("State: %1").arg(tcpSocket->state())+ "\r\n";
	statusInfo->appendPlainText(info);
	if (!isTransing)
	{
		return 0;
	}
	qDebug() << filename;
	QFile file(filename);
	if( !file.open(QIODevice::ReadOnly) )
	{
		qDebug() << "File open error.";
		statusInfo->appendPlainText(tr("\r\nFile open error."));
		return 0;
	}
	fileSize = file.size();
	statusInfo->appendPlainText(tr("Begin to transfer file %1 to %2 at %3/%4")
								.arg(filename).arg(filePath).arg(fileTransSize).arg(fileSize));
	file.seek(fileTransSize);
	qDebug() << tr("file seek to pos %1.").arg(fileTransSize);
	tcpSocket->write(getTcpHeader().toLatin1());
	qint64 tnum = 0;
	int beg = 0, end = 0;
	int speed = 0;
	int cnt = 0;
	beg = time(0);

	qDebug() << beg;
	while (!file.atEnd())
	{
		tnum = tcpSocket->write(file.read(MAXBUFSIZE));
		++cnt;
		if (500 == cnt)
		{
			end = time(0);
			qDebug() << cnt << ": " << beg << " " << end;
			if (beg != end) speed = fileTransSize/((end-beg));
			else speed = 0;
			qDebug() << speed;
			transSpeed->setText(tr("%1 kb/s").arg(speed));
			cnt = 0;
		}
		fileTransSize += tnum;
		procBar->setValue((fileTransSize*1.0/fileSize)*100);
	}
	return 1;
}
void Client::sendFile(QString filename, QString saddr, QString sport)
{
	if ("" == filename)return;
	this->filename = filename;
	if (!isTransing)
	{
		fileTransSize = 0;
		isTransing = true;
	}
	if (setServInfo(saddr, sport))
	{
		tcpSocket->connectToHost(servAddr,
								servPort.toInt());
		if (!tcpSocket->waitForConnected(1000) &&
				tcpSocket->state() == UnconnectedState)
		{
			reConnect();
		}
		else doSend();
	}
	else
	{
		if (!tcpSocket->waitForConnected(1000) &&
						tcpSocket->state() == UnconnectedState)
		{
			reConnect();
		}
		else doSend();
	}
}

#include "clientreconthread.h"

ClientReconThread::ClientReconThread(QObject *parent)
	:QThread(parent)
{}
ClientReconThread::ClientReconThread(QTcpSocket *ts, QString sa, quint16 sp, QPlainTextEdit *sf, QObject *parent)
	:QThread(parent)
{
	tcpSocket = ts;
	servAddr = sa;
	servPort = sp;
	statusInfo = sf;
}
ClientReconThread::~ClientReconThread()
{
}
void ClientReconThread::run()
{
	connect(this, SIGNAL(myReconOK()), this, SLOT(quitClientThread()));
	reCon();
	//exec();
}
void ClientReconThread::reCon()
{
	QString disInfo = tr("\r\nRetry to Connect to server in 5 second.");
	qDebug() << "ClientThread start.";
	tcpSocket->connectToHost(servAddr, servPort);
	qDebug() << "test connect.";
	while(!tcpSocket->waitForConnected(300) &&
		  tcpSocket->state() == QAbstractSocket::UnconnectedState)
	{
		qDebug() << tr("connecting at %1:%2").arg(servAddr).arg(servPort);
		tcpSocket->connectToHost(servAddr, servPort);
		statusInfo->appendPlainText(disInfo);
		sleep(5);
	}
	emit myReconOK();
}
void ClientReconThread::quitClientThread()
{
	qDebug() << tr("Connect OK.");
	quit();
}

#include "serverthread.h"

ServerThread::ServerThread ( int socketDescriptor, QObject* parent ) 
: QThread ( parent ), socketDescriptor(socketDescriptor)
{
	isTransing = false;
	file = NULL;
	transBytes = 0;
}

void ServerThread::run()
{
	clientSocket = new QTcpSocket(0);
	if (!clientSocket->setSocketDescriptor(socketDescriptor))
	{
		emit error(clientSocket->error());
		return;
	}
	connect(clientSocket, SIGNAL(disconnected()),
			this, SLOT(clientDisconnect()));
	connect(clientSocket, SIGNAL(readyRead()), this,
			SLOT(getFileFromClient()));
	connect(this, SIGNAL(transFinish()), this, SLOT(transComplete()));
	qDebug() << "server thread run.";
	exec();
}
void ServerThread::getFile(QFile *file)
{
	char buf[MAXBUFSIZE+1];
	qint64 numbytes;
	while (clientSocket->bytesAvailable() > 0)
	{
		numbytes = clientSocket->read(buf, MAXBUFSIZE);
		if (-1 == numbytes)
		{
			qDebug() << "Client File Read Success.";
			break;
		}
		//buf[numbytes] = '\0';
		transBytes += numbytes;
		file->write(buf, numbytes);
		qDebug()<<tr("%1/%2").arg(transBytes).arg(fileSize);
		if (transBytes >= fileSize)
		{
			numbytes = clientSocket->read(buf, MAXBUFSIZE);
			file->write(buf, numbytes);
			emit transFinish();
		}
	}
}
void ServerThread::getFileFromClient()
{
	char buf[MAXBUFSIZE+1];
	if (!isTransing)
	{
		/*read filepath and filename*/
		qint64 numbytes = clientSocket->readLine(buf, MAXBUFSIZE);
		if (numbytes <= 2)
		{
			return;
		}
		buf[numbytes-2] = '\0';
		if (NULL != file)
		{
			file->close();
			delete file;
			file = NULL;
		}
		file = new QFile(buf);
		qDebug() << tr("filename :%1").arg(buf);
		/*read file already transed size*/
		numbytes = clientSocket->readLine(buf, MAXBUFSIZE);
		buf[numbytes-2] = '\0';
		qDebug() << buf;
		seekPos = QString(buf).toLongLong();
		/*read file size*/
		numbytes = clientSocket->readLine(buf, MAXBUFSIZE);
		buf[numbytes-2] = '\0';
		qDebug() << buf;
		fileSize = QString(buf).toLongLong();
		if ( !file->open(QIODevice::WriteOnly) )
		{
			qDebug() << "open failed.";
			exit(-1);
		}
		file->seek(seekPos);
		transBytes = seekPos;
		isTransing = true;
	}
	getFile(file);

}
void ServerThread::transComplete()
{
	if (NULL != file)
	{
		file->close();
		delete file;
		file = NULL;
	}
	isTransing = false;
	fileSize = seekPos = transBytes = 0;
	qDebug() << tr("File upload success.");
	clientSocket->write("File upload success.");
}

void ServerThread::clientDisconnect()
{
	qDebug() << "A Client has been Disconnected.";
	isTransing = false;
	quit();
}
ServerThread::~ServerThread()
{
	delete clientSocket;
	clientSocket = NULL;
}

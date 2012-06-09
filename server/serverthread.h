#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QtGui>
class ServerThread : public QThread
{
	Q_OBJECT
public:
	ServerThread(int socketDescriptor, QObject *parent = 0);
	~ServerThread();
	void run();
	void getFile(QFile *file);
signals:
	void error(QTcpSocket::SocketError socketError);
	void transFinish();
public slots:
	void getFileFromClient();
	void clientDisconnect();
	void transComplete();
private:
	int socketDescriptor;
	qint64 fileSize;
	qint64 seekPos;
	qint64 transBytes;
	QFile *file;
	bool isTransing;
	QTcpSocket *clientSocket;
};

#define MAXBUFSIZE 1024
#endif // SERVERTHREAD_H

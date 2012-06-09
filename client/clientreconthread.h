#ifndef CLIENTRECONTHREAD_H
#define CLIENTRECONTHREAD_H
#include <QtGui>
#include <QThread>
#include <QTcpSocket>
#include <ctime>
class ClientReconThread : public QThread
{
	Q_OBJECT
public:
	explicit ClientReconThread(QObject *parent = 0);
	ClientReconThread(QTcpSocket *ts,
					  QString sa, quint16 sp,
					  QPlainTextEdit *sf,
					  QObject *parent = 0);
	~ClientReconThread();
	void run();
	void reCon();
signals:
	void myReconOK();
public slots:
	void quitClientThread();
private:
	QTcpSocket *tcpSocket;
	QString servAddr;
	quint16 servPort;
	QPlainTextEdit *statusInfo;
};

#endif // CLIENTRECONTHREAD_H

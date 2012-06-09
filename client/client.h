#ifndef CLIENT_H
#define CLIENT_H
#include <QtGui>
#include <QTcpSocket>
#include <QThread>
class Client : public QTcpSocket
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = 0);
	void setProcBarCon(QProgressBar *pb);
	void setStatusInfo(QPlainTextEdit *si);
	void setSpeedLabel(QLabel *sl );
	void setFileSrvAddr(QLineEdit *fs);
	bool setServInfo(QString saddr, QString sport);
	QString getTcpHeader();
signals:

public slots:
	int doSend();
	bool reConnect();
	void getMsgFromServer();
	void sendFile(QString filename, QString saddr, QString sport);
private:
	QTcpSocket *tcpSocket;
	QProgressBar *procBar;
	QLabel *transSpeed;
	QLineEdit *fileServAddr;
	QString servAddr;
	QString servPort;
	QString filename;
	qint64 fileSize;
	qint64 fileTransSize;
	QPlainTextEdit *statusInfo;
	bool isTransing;
};

#define MAXBUFSIZE 1024
#endif // CLIENT_H

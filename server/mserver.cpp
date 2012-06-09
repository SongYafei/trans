#include "mserver.h"
#include "ui_mserver.h"

#include <QtNetwork>
#include <QtGui>
MServer::MServer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MServer)
{
	QHostAddress hostAddr;
    ui->setupUi(this);
	ui->quitButton->setAutoDefault(false);
	//QHostInfo info = QHostInfo::fromName(QHostInfo::localHostName());
	//hostAddr = info.addresses().first();
	QList<QHostAddress> ipList = QNetworkInterface::allAddresses();
	for (int i = 0; i < ipList.size(); ++i) {
		if (ipList.at(i) != QHostAddress::LocalHost &&
			ipList.at(i).toIPv4Address()) {
			hostAddr = ipList.at(i);
			break;
		}
	}
	quint16 port = 8888;
	hostAddr.setAddress("127.0.0.1");
	qDebug() << "IP : " << hostAddr.toString();
	if (!server.listen(hostAddr, port)) {
		QMessageBox::critical(this, tr("Threaded Server"),
							  tr("Unable to start the server : %1.")
							  .arg(server.errorString()));
		close();
		exit(-1);
		return;
	}
	ui->ipLabel->setText(tr("ip : %1\r\nport :  %2").arg(hostAddr.toString()).arg(port));
}

MServer::~MServer()
{
    delete ui;
}

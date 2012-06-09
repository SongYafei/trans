#include "server.h"
#include "serverthread.h"

Server::Server(QObject *parent):QTcpServer(parent)
{
	
}

void Server::incomingConnection(int socketDescriptor)
{
	ServerThread *thread = new ServerThread(socketDescriptor, this);
	connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
	//connect(this,SIGNAL(close()), thread, SLOT(deleteLater()));
	thread->start();
	//QTcpServer::incomingConnection(socketDescriptor);
}


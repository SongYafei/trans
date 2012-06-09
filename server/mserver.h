#ifndef MSERVER_H
#define MSERVER_H

#include <QDialog>
#include "server.h"
namespace Ui {
    class MServer;
}

class MServer : public QDialog
{
    Q_OBJECT

public:
    explicit MServer(QWidget *parent = 0);
    ~MServer();

private:
    Ui::MServer *ui;
	Server server;
};

#endif // MSERVER_H

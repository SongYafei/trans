#ifndef UICLIENT_H
#define UICLIENT_H

#include <QDialog>
#include "client.h"
namespace Ui {
    class UIClient;
}

class UIClient : public QDialog
{
    Q_OBJECT

public:
    explicit UIClient(QWidget *parent = 0);
    ~UIClient();
public slots:
	void sendFile();
	QString chooseFile();
private:
    Ui::UIClient *ui;
	Client c;

	QString filename;
	QString servPort;
	QString servAddr;

};

#endif // UICLIENT_H

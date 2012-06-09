#include "uiclient.h"
#include "ui_uiclient.h"
#include "client.h"
#include <QFileDialog>

UIClient::UIClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UIClient)
{
	ui->setupUi(this);
	ui->statusInfo->setReadOnly(true);
	c.setProcBarCon(ui->progressBar);
	c.setStatusInfo(ui->statusInfo);
	c.setSpeedLabel(ui->transSpeed);
	c.setFileSrvAddr(ui->fileServAddr);
	connect(ui->fileSendBnt, SIGNAL(clicked()),
			this, SLOT(sendFile()));
	connect(ui->fileChooseBnt, SIGNAL(clicked()),
			this, SLOT(chooseFile()));
}

UIClient::~UIClient()
{
    delete ui;
}
void UIClient::sendFile()
{
	c.sendFile(filename, ui->ServAddrEdit->text(),
			   ui->servPortEdit->text());
}
QString UIClient::chooseFile()
{
	QFileDialog *fd = new QFileDialog();
	filename = fd->getOpenFileName(this,
				  tr("Choose trans file"), tr("."));
	delete fd;
	ui->fileNameEdit->setText(filename);
	ui->progressBar->setValue(0);
	return filename;
}

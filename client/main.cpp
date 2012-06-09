#include <QtGui/QApplication>
#include <QTextCodec>
#include "uiclient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
	QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    UIClient w;
    w.show();

    return a.exec();
}

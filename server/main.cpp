#include <QtGui/QApplication>
#include <QTextCodec>
#include "mserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
	QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    MServer w;
    w.show();

    return a.exec();
}

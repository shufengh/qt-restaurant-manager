#include <QtGui/QApplication>
#include "login.h"
#include <QTextCodec>
Db *Db::pSelf = NULL;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("gb18030"));
    Login w;
    w.show();
    return a.exec();
}

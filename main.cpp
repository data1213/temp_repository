#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	// 主窗口对象
    MainWindow w;
	//显式主窗口
    w.show();
	//进入阻塞模式
    return a.exec();
}

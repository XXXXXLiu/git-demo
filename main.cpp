#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread myThread1;
    myThread1.name="myThread1";

    MyThread myThread2;
    myThread2.name="myThread2";

    MyThread myThread3;
    myThread3.name="myThread3";

    myThread1.start();
    //myThread2.start();
    //myThread3.start();

    myThread1.stop=true;


    return a.exec();
}

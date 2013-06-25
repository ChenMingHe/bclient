#include "TimeRequestThread.h"

TimeRequestThread::TimeRequestThread(QObject *parent) :
    QThread(parent), timeInterval(10000)
{
    connect(&timer, SIGNAL(timeout()), this, SLOT(sendTimeRequest()));
}

void TimeRequestThread::run()
{
    timer.start(timeInterval);
    exec();
}

void TimeRequestThread::setTimeInterval(qint32 interval)
{
    this->timeInterval = interval;
}

void TimeRequestThread::sendTimeRequest()
{
    if (--times > 0) {
        // @todo �����͵���Ϣ����
    } else {
        this->terminate(); // ������ֹ
    }
}

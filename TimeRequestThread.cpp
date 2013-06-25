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
        // @todo 整理发送的消息数据
    } else {
        this->terminate(); // 进程终止
    }
}

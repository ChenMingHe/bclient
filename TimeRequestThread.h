#ifndef TIMEREQUESTTHREAD_H
#define TIMEREQUESTTHREAD_H

#include <QThread>
#include <QTimer>
#include "UdpSender.h"

class TimeRequestThread : public QThread
{
    Q_OBJECT
public:
    explicit TimeRequestThread(QObject *parent = 0);
    void run();

signals:
    
public:
    void setUdpSender(UdpSender *sender);
    void setTimeInterval(qint32 interval);
    void setUserId(qint32 id);
    // ....

private slots:
    void sendTimeRequest();

private:
    QTimer timer;
    UdpSender *usender;

    qint32 times; // ·¢ËÍ´ÎÊý
    qint32 timeInterval;
    qint32 userId;
    // ....
};

#endif // TIMEREQUESTTHREAD_H

#ifndef UDPSENDER_H
#define UDPSENDER_H

#include <QObject>
#include <QUdpSocket>

class UdpSender : public QObject
{
    Q_OBJECT
public:
    explicit UdpSender(QObject *parent = 0);
    
signals:
    
public slots:
    /**
      @arg msg : 需要发送的文本消息
    */
    void sendMsg(const QByteArray &msg);
    /**
      @arg port : 新的发送端口号
    */
    void changeSendPort(qint16 port);

private:
    QUdpSocket *sk;
    qint16 bport; //发送端口号端口号
};

#endif // UDPSENDER_H

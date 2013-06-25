#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QObject>
#include <QSharedPointer>
#include <QUdpSocket>

class UdpServer : public QObject
{
    Q_OBJECT
public:
    explicit UdpServer(QObject *parent = 0);
    
signals:
    /**
      @arg msg ： 接收到的消息
    */
    void newMsg(QSharedPointer<QByteArray> msg);
    
public slots:
    /**
      改变绑定端口
      @arg port : 新的绑定端口
    */
    void changeBindPort(qint16 port);
    /**
      接收消息
    */
    void recvMsg();

private:
    qint16 port;
    QUdpSocket *sk;
};

#endif // UDPSERVER_H

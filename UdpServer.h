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
      @arg msg �� ���յ�����Ϣ
    */
    void newMsg(QSharedPointer<QByteArray> msg);
    
public slots:
    /**
      �ı�󶨶˿�
      @arg port : �µİ󶨶˿�
    */
    void changeBindPort(qint16 port);
    /**
      ������Ϣ
    */
    void recvMsg();

private:
    qint16 port;
    QUdpSocket *sk;
};

#endif // UDPSERVER_H

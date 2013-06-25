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
      @arg msg : ��Ҫ���͵��ı���Ϣ
    */
    void sendMsg(const QByteArray &msg);
    /**
      @arg port : �µķ��Ͷ˿ں�
    */
    void changeSendPort(qint16 port);
private:
    QUdpSocket *sk;
    qint16 bport; //���Ͷ˿ںŶ˿ں�
};

#endif // UDPSENDER_H

#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>


class Config : public QObject
{
    Q_OBJECT
public:
    explicit Config(QObject *parent = 0);
    
signals:
    void balancerPortChange(qint16 port);
    void balancerIpChange(QString &ipAddr);
    void localPortChange(qint16 port);


public slots:
public:
    void setUserId(qint32 id);
    void setThreadNum(qint32 num);
    void setBalancerId(qint32 id);
    void setBalancerIpAddr(const QString &ipAddr);
    void setLocalPort(qint16 port);
    void setBalancePort(qint16 port);
    void setMsgNum(qint32 num);
    void setMsgTimerInterval(qint32 interval);

    qint32 getUserId();
    qint32 getThreadNum();
    qint32 getBalancerId();
    const QString &getBalancerIpAddr();
    qint16 getLocalPort();
    qint16 getBalancePort();
    qint32 getMsgNum();
    qint32 getMsgTimerInterval();

    /**
      �����ñ仯���浽�����ļ���
    */
    void saveSetting();

private:
    qint32 userId; // �ͻ���ID
    qint32 tNum; //�������߳�����
    qint32 bId; // ���ؾ�����ID
    QString bIpAddr; // ���ؾ�����IP��ַ
    qint16 localPort; // ���ؼ����˿ں�
    qint16 bPort; // ���ؾ������˿ں�
    qint32 msgNum; // ������Ϣ����
    qint32 msgTimeInterval; // ������Ϣ���
    bool sflag; // ��ʾ���÷����ı�
};

#endif // CONFIG_H

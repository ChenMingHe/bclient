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
      将配置变化保存到配置文件中
    */
    void saveSetting();

private:
    qint32 userId; // 客户端ID
    qint32 tNum; //开启的线程数量
    qint32 bId; // 负载均衡器ID
    QString bIpAddr; // 负载均衡器IP地址
    qint16 localPort; // 本地监听端口号
    qint16 bPort; // 负载均衡器端口号
    qint32 msgNum; // 发送消息数量
    qint32 msgTimeInterval; // 发送消息间隔
    bool sflag; // 表示配置发生改变
};

#endif // CONFIG_H

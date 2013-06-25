#include "Config.h"

Config::Config(QObject *parent) :
    QObject(parent),
    userId(0),tNum(1),bId(0),bIpAddr(""),
    localPort(0), bPort(0),msgNum(0),msgTimeInterval(0xEFFFFFFF),
    sflag(false)
{
    // @todo 读取配置文件信息
}

void Config::setUserId(qint32 id)
{
    if (this->userId == id)
        return;
    this->userId = id;
    this->sflag = true;
}

void Config::setThreadNum(qint32 num)
{
    if (this->tNum == num)
        return;
    this->tNum = num;
    this->sflag = true;
}

void Config::setBalancerId(qint32 id)
{
    if (this->bId == id)
        return;
    this->bId = id;
    this->sflag = true;
}

void Config::setBalancerIpAddr(const QString &ipAddr)
{
    if (this->bIpAddr == ipAddr)
        return;
    this->bIpAddr = ipAddr;
    this->sflag = true;
    emit balancerIpChange(this->bIpAddr);
}

void Config::setLocalPort(qint16 port)
{
    if (this->localPort == port)
        return;
    this->localPort = port;
    this->sflag = true;
    emit localPortChange(this->localPort);
}

void Config::setBalancePort(qint16 port)
{
    if (this->bPort == port)
        return;
    this->bPort = port;
    this->sflag = true;
    emit balancerPortChange(this->bPort);
}

void Config::setMsgNum(qint32 num)
{
    if (this->msgNum == num)
        return;
    this->msgNum = num;
    this->sflag = true;
}

void Config::setMsgTimerInterval(qint32 interval)
{
    if (this->msgTimeInterval == interval)
        return;
    this->msgTimeInterval = interval;
    this->sflag = true;
}

void Config::saveSetting()
{
    if (this->sflag == false)
        return;
    // @todo 将数据保存到配置文件


    this->sflag = false;
}

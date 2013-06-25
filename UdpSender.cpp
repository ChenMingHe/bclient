#include "UdpSender.h"

UdpSender::UdpSender(QObject *parent) :
    QObject(parent)
{
}

void UdpSender::sendMsg(const QByteArray &msg)
{
    // @todo
}

void UdpSender::changeSendPort(qint16 port)
{
    // @todo
}

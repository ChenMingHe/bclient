#include "MessageStatistics.h"
#include "ui_MessageStatistics.h"

MessageStatistics::MessageStatistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageStatistics),
    sendCount(0), recvCount(0),
    successCount(0), failCount(0)
{
    ui->setupUi(this);
}

MessageStatistics::~MessageStatistics()
{
    delete ui;
}

void MessageStatistics::sendCountIncrease()
{
    ui->sendCount->setText(QString::number(++sendCount));
}

void MessageStatistics::recvCountIncrease()
{
    ui->recvCount->setText(QString::number(++recvCount));
}

void MessageStatistics::successCountIncrease()
{
    ui->sucesCount->setText(QString::number(++successCount));
}

void MessageStatistics::failCountIncrease()
{
    ui->failCount->setText(QString::number(++failCount));
}

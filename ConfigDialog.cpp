#include "ConfigDialog.h"
#include "ui_ConfigDialog.h"
#include <assert.h>

ConfigDialog::ConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigDialog), config(NULL)
{
    ui->setupUi(this);
}

ConfigDialog::~ConfigDialog()
{
    delete ui;
}

void ConfigDialog::setConfig(Config *c)
{
    this->config = c;
}

void ConfigDialog::on_accptButton_accepted()
{
    assert(config);
    config->setBalancePort(ui->bportEdit->text().toInt());
    config->setBalancerId(ui->bidEidt->text().toInt());
    // config->setBalancerIpAddr(ui->b);
    config->setLocalPort(ui->lisPortEdit->text().toInt());
    config->setMsgNum(ui->msgNumEdit->text().toInt());
    config->setMsgTimerInterval(ui->timeIntervalEdit->text().toInt());
    config->setThreadNum(ui->thrNumEdit->text().toInt());
    config->setUserId(ui->uidEdit->text().toInt());
    config->saveSetting();
    this->close();
}

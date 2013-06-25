#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "ConfigDialog.h"
#include "AboutUsDialog.h"

#include <QDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    config = new Config(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSetting_triggered()
{
    ConfigDialog *d = new ConfigDialog(this);
    d->setConfig(config);
    d->show();
}

void MainWindow::handleMsg(QSharedPointer<QByteArray> data)
{
    /**
      @todo 解析消息数据，更新统计量，将消息数据输出
    */
}


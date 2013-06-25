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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSetting_triggered()
{
    QDialog *d = new ConfigDialog(this);
    d->show();
}

void MainWindow::handleMsg(QSharedPointer<QByteArray> data)
{
    /**
      @todo ������Ϣ���ݣ�����ͳ����������Ϣ�������
    */
}


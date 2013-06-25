#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Config.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionSetting_triggered();
    void handleMsg(QSharedPointer<QByteArray> data);

private:
    Ui::MainWindow *ui;
    Config *config;
};

#endif // MAINWINDOW_H

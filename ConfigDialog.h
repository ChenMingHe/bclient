#ifndef CONFIGDIALOG_H
#define CONFIGDIALOG_H

#include <QDialog>
#include "Config.h"

namespace Ui {
class ConfigDialog;
}

class ConfigDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfigDialog(QWidget *parent = 0);
    ~ConfigDialog();
    void setConfig(Config *c);

private slots:
    void on_accptButton_accepted();

private:
    Ui::ConfigDialog *ui;
    Config *config;
};

#endif // CONFIGDIALOG_H

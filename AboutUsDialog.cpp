#include "AboutUsDialog.h"
#include "ui_AboutUsDialog.h"

AboutUsDialog::AboutUsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutUsDialog)
{
    ui->setupUi(this);
}

AboutUsDialog::~AboutUsDialog()
{
    delete ui;
}

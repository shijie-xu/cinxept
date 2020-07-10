#include "selectrange.h"
#include "ui_selectrange.h"

SelectRange::SelectRange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectRange)
{
    ui->setupUi(this);
}

SelectRange::~SelectRange()
{
    delete ui;
}

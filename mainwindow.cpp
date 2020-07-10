#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectrange.h"

#include <QDebug>
#include <QSizePolicy>

#define APP_VERSION "0.1"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cbbox_yushu->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    ui->cbbox_gelv->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    ui->cbbox_ticai->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    this->setWindowTitle(tr("Cinxept v") + APP_VERSION);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cbbox_yushu_currentIndexChanged(int index)
{
    QStringList cipai = {tr("踏莎行")};
    QStringList ticai = {tr("律诗"),tr("绝句"),tr("排律")};
    switch (index) {
    case 0:
    case 2:
        //qDebug() << tr("平水韵");
        ui->cbbox_gelv->removeItem(3);
        ui->cbbox_gelv->setCurrentIndex(0);
        ui->cbbox_gelv->setEnabled(true);

        ui->cbbox_ticai->clear();
        ui->cbbox_ticai->addItems(ticai);
        ui->cbbox_ticai->setCurrentIndex(0);
        break;
    case 1:
        //qDebug() << tr("词林正韵");
        ui->cbbox_gelv->addItem(tr("词牌"));
        ui->cbbox_gelv->setCurrentIndex(3);
        ui->cbbox_gelv->setEnabled(false);

        ui->cbbox_ticai->clear();
        ui->cbbox_ticai->addItems(cipai);
        ui->cbbox_ticai->setCurrentIndex(0);
    }
}

void MainWindow::on_btn_range_clicked()
{
    SelectRange *sltDlg = new SelectRange(this);
    sltDlg->show();
}

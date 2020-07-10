#include "errorwidget.h"
#include <QPainter>

ErrorWidget::ErrorWidget(QWidget *parent) : QWidget(parent)
{

}

void ErrorWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawText(100,100,"Hello world");

}

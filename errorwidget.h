#ifndef ERRORWIDGET_H
#define ERRORWIDGET_H

#include <QObject>
#include <QWidget>

class ErrorWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ErrorWidget(QWidget *parent = nullptr);

signals:
protected:
    void paintEvent(QPaintEvent *event) override;

};

#endif // ERRORWIDGET_H

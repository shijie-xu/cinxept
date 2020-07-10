#ifndef SELECTRANGE_H
#define SELECTRANGE_H

#include <QDialog>

namespace Ui {
class SelectRange;
}

class SelectRange : public QDialog
{
    Q_OBJECT

public:
    explicit SelectRange(QWidget *parent = nullptr);
    ~SelectRange();

private:
    Ui::SelectRange *ui;
};

#endif // SELECTRANGE_H

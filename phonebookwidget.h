#ifndef PHONEBOOKWIDGET_H
#define PHONEBOOKWIDGET_H

#include <QWidget>

namespace Ui {
    class PhonebookWidget;
}

class PhonebookWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PhonebookWidget(QWidget *parent = 0);
    ~PhonebookWidget();

private:
    Ui::PhonebookWidget *ui;
};

#endif // PHONEBOOKWIDGET_H

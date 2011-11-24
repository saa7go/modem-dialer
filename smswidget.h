#ifndef SMSWIDGET_H
#define SMSWIDGET_H

#include <QWidget>

namespace Ui {
    class SMSWidget;
}

class SMSWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SMSWidget(QWidget *parent = 0);
    ~SMSWidget();

private:
    Ui::SMSWidget *ui;
};

#endif // SMSWIDGET_H

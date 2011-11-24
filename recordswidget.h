#ifndef RECORDSWIDGET_H
#define RECORDSWIDGET_H

#include <QWidget>

namespace Ui {
    class RecordsWidget;
}

class RecordsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit RecordsWidget(QWidget *parent = 0);
    ~RecordsWidget();

private:
    Ui::RecordsWidget *ui;
};

#endif // RECORDSWIDGET_H

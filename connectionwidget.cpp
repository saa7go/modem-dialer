#include "connectionwidget.h"
#include "ui_connectionwidget.h"
#include <QPainter>

ConnectionWidget::ConnectionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectionWidget)
{
    ui->setupUi(this);
    QPalette pal = palette();
    pal.setColor(QPalette::Window, QColor(221, 241, 251));
    setPalette(pal);
}

ConnectionWidget::~ConnectionWidget()
{
    delete ui;
}

#include "statisticwidget.h"
#include "ui_statisticwidget.h"

StatisticWidget::StatisticWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StatisticWidget)
{
    ui->setupUi(this);
}

StatisticWidget::~StatisticWidget()
{
    delete ui;
}

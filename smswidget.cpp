#include "smswidget.h"
#include "ui_smswidget.h"

SMSWidget::SMSWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SMSWidget)
{
    ui->setupUi(this);
}

SMSWidget::~SMSWidget()
{
    delete ui;
}

#include "recordswidget.h"
#include "ui_recordswidget.h"

RecordsWidget::RecordsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordsWidget)
{
    ui->setupUi(this);
}

RecordsWidget::~RecordsWidget()
{
    delete ui;
}

#include "phonebookwidget.h"
#include "ui_phonebookwidget.h"

PhonebookWidget::PhonebookWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhonebookWidget)
{
    ui->setupUi(this);
}

PhonebookWidget::~PhonebookWidget()
{
    delete ui;
}

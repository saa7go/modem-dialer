#include "voicewidget.h"
#include "ui_voicewidget.h"

VoiceWidget::VoiceWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VoiceWidget)
{
    ui->setupUi(this);
}

VoiceWidget::~VoiceWidget()
{
    delete ui;
}

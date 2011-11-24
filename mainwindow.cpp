#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connectionwidget.h"
#include "statisticwidget.h"
#include "voicewidget.h"
#include "smswidget.h"
#include "phonebookwidget.h"
#include "recordswidget.h"
#include "settingdialog.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(m_connectionWidget = new ConnectionWidget);
    ui->stackedWidget->addWidget(m_statisticWidget = new StatisticWidget);
    ui->stackedWidget->addWidget(m_voiceWidget = new VoiceWidget);
    ui->stackedWidget->addWidget(m_smsWidget = new SMSWidget);
    ui->stackedWidget->addWidget(m_phonebookWidget = new PhonebookWidget);
    ui->stackedWidget->addWidget(m_recordsWidget = new RecordsWidget);

    QActionGroup *actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actionConnection);
    actionGroup->addAction(ui->actionStatistic);
    actionGroup->addAction(ui->actionVoice);
    actionGroup->addAction(ui->actionSMS);
    actionGroup->addAction(ui->actionPhonebook);
    actionGroup->addAction(ui->actionRecord);
    actionGroup->setExclusive(true);

    connect(ui->actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConnection_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionStatistic_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_actionVoice_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_actionSMS_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_actionPhonebook_triggered()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_actionRecord_triggered()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_actionAbout_triggered()
{
    // info apps
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Title");
    msgBox.setText("Text");
    msgBox.setStyleSheet("background { rgba(35, 119,179, 255) }");
    msgBox.exec();
}

void MainWindow::on_actionSettings_triggered()
{
    SettingDialog(this).exec();
}

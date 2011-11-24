#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class ConnectionWidget;
class StatisticWidget;
class SMSWidget;
class VoiceWidget;
class PhonebookWidget;
class RecordsWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionConnection_triggered();

    void on_actionStatistic_triggered();

    void on_actionVoice_triggered();

    void on_actionSMS_triggered();

    void on_actionPhonebook_triggered();

    void on_actionRecord_triggered();

    void on_actionAbout_triggered();

    void on_actionSettings_triggered();

private:
    Ui::MainWindow *ui;
    ConnectionWidget *m_connectionWidget;
    StatisticWidget *m_statisticWidget;
    VoiceWidget *m_voiceWidget;
    SMSWidget *m_smsWidget;
    PhonebookWidget *m_phonebookWidget;
    RecordsWidget *m_recordsWidget;
};

#endif // MAINWINDOW_H

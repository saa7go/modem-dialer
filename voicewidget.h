#ifndef VOICEWIDGET_H
#define VOICEWIDGET_H

#include <QWidget>

namespace Ui {
    class VoiceWidget;
}

class VoiceWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VoiceWidget(QWidget *parent = 0);
    ~VoiceWidget();

private:
    Ui::VoiceWidget *ui;
};

#endif // VOICEWIDGET_H

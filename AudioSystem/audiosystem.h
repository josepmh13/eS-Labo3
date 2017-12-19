#ifndef AUDIOSYSTEM_H
#define AUDIOSYSTEM_H

#include <QWidget>
#include <radio.h>
#include <mp3.h>

namespace Ui {
class AudioSystem;
}

class AudioSystem : public QWidget
{
    Q_OBJECT

public:
    explicit AudioSystem(QWidget *parent = 0);
    ~AudioSystem();

private slots:
    void on_btn_radio_clicked();
    void on_btn_mp3_clicked();
    void moveHome();

private:
    Ui::AudioSystem *ui;
    Radio RadioPlayer;
    MP3 MP3Player;

};

#endif // AUDIOSYSTEM_H

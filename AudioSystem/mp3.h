#ifndef MP3_H
#define MP3_H

#include <QWidget>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QStandardItemModel>
#include <QMediaPlaylist>

namespace Ui {
class MP3;
}

class MP3 : public QWidget
{
    Q_OBJECT

public:
    explicit MP3(QWidget *parent = 0);
    ~MP3();

private slots:
    void on_btn_play_clicked();
    void on_btn_stop_clicked();
    void on_btn_pause_clicked();
    void on_btn_folder_clicked();
    void on_sliderProgress_sliderMoved(int position);
    void on_sliderVolume_sliderMoved(int position);
    void on_durationChanged(qint64 position);
    void on_positionChanged(qint64 position);
    void on_btn_next_clicked();
    void on_btn_previous_clicked();

    void on_pushButton_clicked();

private:
    Ui::MP3 *ui;
    QMediaPlayer *player;
    QStandardItemModel *m_playListModel;
    QMediaPlaylist *m_playlist;

signals:
    void HomeClicked();
};

#endif // MP3_H

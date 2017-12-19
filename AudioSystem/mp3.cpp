#include "mp3.h"
#include "ui_mp3.h"

MP3::MP3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MP3)
{
    ui->setupUi(this);
    //MP3::setStyleSheet("background-color: rgba(143,188,214, 50%)");

    // Creating playlist model
    m_playListModel = new QStandardItemModel(this);
    ui->playlistView->setModel(m_playListModel); // With table view
    m_playListModel->setHorizontalHeaderLabels(QStringList() << ("Audio Files")
                                                           << ("File Path"));

    ui->playlistView->hideColumn(1);
    ui->playlistView->verticalHeader()->setVisible(false);
    ui->playlistView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->playlistView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->playlistView->resizeColumnsToContents();
    ui->playlistView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->playlistView->horizontalHeader()->setStretchLastSection(true);

    // Creating player and playlist
    player = new QMediaPlayer(this);
    m_playlist = new QMediaPlaylist(player);
    player->setPlaylist(m_playlist);
    m_playlist->setPlaybackMode(QMediaPlaylist::Sequential);


    // Connecting playlist view to QTableView
    connect(ui->playlistView, &QTableView::doubleClicked, [this](const QModelIndex &index){
        m_playlist->setCurrentIndex(index.row());
    });

    //Connecting playlist and current track
    connect(m_playlist, &QMediaPlaylist::currentIndexChanged, [this](int index){
        ui->currentTrack->setText(m_playListModel->data(m_playListModel->index(index, 0)).toString());
    });


    //Connecting sliders to volume position and duration position
    connect(player, &QMediaPlayer::positionChanged, this, &MP3::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &MP3::on_durationChanged);
}

MP3::~MP3()
{
    delete ui;
    delete m_playListModel;
    delete m_playlist;
    delete player;
}

void MP3::on_btn_play_clicked()
{
    player->play();
    ui->playerStatus->setText("Playing...");
}

void MP3::on_btn_stop_clicked()
{
    player->stop();
    ui->playerStatus->setText("Stopped...");
}

void MP3::on_btn_pause_clicked()
{
    player->pause();
    ui->playerStatus->setText("Paused...");
}

void MP3::on_btn_folder_clicked()
{
    QStringList filenames = QFileDialog::getOpenFileNames(this,
                                                          tr("Open Files"),
                                                          QString(),
                                                          tr("Audio Files (*.mp3)"));

    foreach (QString filePath, filenames) {
        QList<QStandardItem *> items;
        items.append(new QStandardItem(QDir(filePath).dirName()));
        items.append(new QStandardItem(filePath));
        m_playListModel->appendRow(items);
        m_playlist->addMedia(QUrl::fromLocalFile(filePath));
    }
}

void MP3::on_sliderProgress_sliderMoved(int position)
{
    player->setPosition(position);
}

void MP3::on_sliderVolume_sliderMoved(int position)
{
    player->setVolume(position);
}

void MP3::on_durationChanged(qint64 position)
{
    ui->sliderProgress->setMaximum(position);
}

void MP3::on_positionChanged(qint64 position)
{
    ui->sliderProgress->setValue(position);
}

void MP3::on_btn_next_clicked()
{
    m_playlist->next();
}

void MP3::on_btn_previous_clicked()
{
    m_playlist->previous();
}

void MP3::on_pushButton_clicked()
{
    emit HomeClicked();
}

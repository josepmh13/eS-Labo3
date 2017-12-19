#include "audiosystem.h"
#include "ui_audiosystem.h"

AudioSystem::AudioSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AudioSystem)
{
    ui->setupUi(this);


    // Adding classes to stackedWidget
    ui->stackedWidget->addWidget(&RadioPlayer);
    ui->stackedWidget->addWidget(&MP3Player);

    // Connect home signal
    connect(&RadioPlayer, SIGNAL(HomeClicked()), this, SLOT(moveHome()));
    connect(&MP3Player, SIGNAL(HomeClicked()), this, SLOT(moveHome()));
}

AudioSystem::~AudioSystem()
{
    delete ui;
}

void AudioSystem::on_btn_radio_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void AudioSystem::on_btn_mp3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void AudioSystem::moveHome(){
    ui->stackedWidget->setCurrentIndex(0);
}

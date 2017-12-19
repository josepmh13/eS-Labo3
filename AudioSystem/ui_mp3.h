/********************************************************************************
** Form generated from reading UI file 'mp3.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MP3_H
#define UI_MP3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MP3
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *playerStatus;
    QTableView *playlistView;
    QPushButton *btn_play;
    QPushButton *btn_stop;
    QPushButton *btn_previous;
    QFormLayout *formLayout;
    QLabel *label;
    QSlider *sliderProgress;
    QLabel *label_2;
    QSlider *sliderVolume;
    QLabel *label_3;
    QLabel *currentTrack;
    QFrame *line;
    QPushButton *btn_next;
    QPushButton *btn_pause;
    QPushButton *btn_folder;

    void setupUi(QWidget *MP3)
    {
        if (MP3->objectName().isEmpty())
            MP3->setObjectName(QStringLiteral("MP3"));
        MP3->resize(711, 521);
        gridLayout = new QGridLayout(MP3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(MP3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));

        gridLayout->addWidget(pushButton, 12, 2, 1, 1);

        playerStatus = new QLabel(MP3);
        playerStatus->setObjectName(QStringLiteral("playerStatus"));
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans Mono CJK TC"));
        font.setPointSize(14);
        playerStatus->setFont(font);

        gridLayout->addWidget(playerStatus, 14, 2, 1, 1);

        playlistView = new QTableView(MP3);
        playlistView->setObjectName(QStringLiteral("playlistView"));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans CJK TC"));
        font1.setPointSize(16);
        playlistView->setFont(font1);

        gridLayout->addWidget(playlistView, 0, 2, 8, 2);

        btn_play = new QPushButton(MP3);
        btn_play->setObjectName(QStringLiteral("btn_play"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/control_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_play->setIcon(icon1);
        btn_play->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_play, 2, 0, 1, 1);

        btn_stop = new QPushButton(MP3);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/control_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_stop->setIcon(icon2);
        btn_stop->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_stop, 1, 0, 1, 1);

        btn_previous = new QPushButton(MP3);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/control_previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_previous->setIcon(icon3);
        btn_previous->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_previous, 12, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(MP3);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral("Noto Sans Mono CJK TC"));
        font2.setPointSize(12);
        label->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        sliderProgress = new QSlider(MP3);
        sliderProgress->setObjectName(QStringLiteral("sliderProgress"));
        sliderProgress->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, sliderProgress);

        label_2 = new QLabel(MP3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        sliderVolume = new QSlider(MP3);
        sliderVolume->setObjectName(QStringLiteral("sliderVolume"));
        sliderVolume->setValue(50);
        sliderVolume->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::FieldRole, sliderVolume);

        label_3 = new QLabel(MP3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setFamily(QStringLiteral("Noto Sans CJK TC"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_3);


        gridLayout->addLayout(formLayout, 9, 2, 1, 1);

        currentTrack = new QLabel(MP3);
        currentTrack->setObjectName(QStringLiteral("currentTrack"));
        currentTrack->setFont(font3);

        gridLayout->addWidget(currentTrack, 8, 2, 1, 2);

        line = new QFrame(MP3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        btn_next = new QPushButton(MP3);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/control_next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_next->setIcon(icon4);
        btn_next->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_next, 11, 0, 1, 1);

        btn_pause = new QPushButton(MP3);
        btn_pause->setObjectName(QStringLiteral("btn_pause"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/control_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_pause->setIcon(icon5);
        btn_pause->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_pause, 9, 0, 1, 1);

        btn_folder = new QPushButton(MP3);
        btn_folder->setObjectName(QStringLiteral("btn_folder"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/control_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_folder->setIcon(icon6);
        btn_folder->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_folder, 11, 2, 1, 1);


        retranslateUi(MP3);

        QMetaObject::connectSlotsByName(MP3);
    } // setupUi

    void retranslateUi(QWidget *MP3)
    {
        MP3->setWindowTitle(QApplication::translate("MP3", "Form", 0));
        pushButton->setText(QString());
        playerStatus->setText(QString());
        btn_play->setText(QString());
        btn_stop->setText(QString());
        btn_previous->setText(QString());
        label->setText(QApplication::translate("MP3", "Progress", 0));
        label_2->setText(QApplication::translate("MP3", "Volume", 0));
        label_3->setText(QApplication::translate("MP3", " Now:", 0));
        currentTrack->setText(QString());
        btn_next->setText(QString());
        btn_pause->setText(QString());
        btn_folder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MP3: public Ui_MP3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MP3_H

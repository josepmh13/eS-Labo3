/********************************************************************************
** Form generated from reading UI file 'audiosystem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOSYSTEM_H
#define UI_AUDIOSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioSystem
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QPushButton *btn_radio;
    QPushButton *btn_mp3;

    void setupUi(QWidget *AudioSystem)
    {
        if (AudioSystem->objectName().isEmpty())
            AudioSystem->setObjectName(QStringLiteral("AudioSystem"));
        AudioSystem->resize(711, 495);
        gridLayout_2 = new QGridLayout(AudioSystem);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(AudioSystem);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_radio = new QPushButton(page_3);
        btn_radio->setObjectName(QStringLiteral("btn_radio"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/radio.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_radio->setIcon(icon);
        btn_radio->setIconSize(QSize(300, 300));

        gridLayout->addWidget(btn_radio, 0, 0, 1, 1);

        btn_mp3 = new QPushButton(page_3);
        btn_mp3->setObjectName(QStringLiteral("btn_mp3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/mp3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_mp3->setIcon(icon1);
        btn_mp3->setIconSize(QSize(300, 300));

        gridLayout->addWidget(btn_mp3, 0, 1, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 2, 3);


        retranslateUi(AudioSystem);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AudioSystem);
    } // setupUi

    void retranslateUi(QWidget *AudioSystem)
    {
        AudioSystem->setWindowTitle(QApplication::translate("AudioSystem", "AudioSystem", 0));
        btn_radio->setText(QString());
        btn_mp3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AudioSystem: public Ui_AudioSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOSYSTEM_H

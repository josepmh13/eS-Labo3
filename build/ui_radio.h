/********************************************************************************
** Form generated from reading UI file 'radio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIO_H
#define UI_RADIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Radio
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn_previous;
    QLCDNumber *lcdNumber;
    QPushButton *btn_next;
    QPushButton *pushButton;

    void setupUi(QWidget *Radio)
    {
        if (Radio->objectName().isEmpty())
            Radio->setObjectName(QStringLiteral("Radio"));
        Radio->resize(711, 495);
        gridLayout = new QGridLayout(Radio);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_previous = new QPushButton(Radio);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_previous->setIcon(icon);
        btn_previous->setIconSize(QSize(100, 100));

        gridLayout->addWidget(btn_previous, 3, 0, 1, 2);

        lcdNumber = new QLCDNumber(Radio);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        lcdNumber->setFont(font);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(104.7));

        gridLayout->addWidget(lcdNumber, 2, 0, 1, 5);

        btn_next = new QPushButton(Radio);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_next->setIcon(icon1);
        btn_next->setIconSize(QSize(100, 100));

        gridLayout->addWidget(btn_next, 3, 3, 1, 2);

        pushButton = new QPushButton(Radio);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(50, 50));

        gridLayout->addWidget(pushButton, 0, 0, 1, 5);


        retranslateUi(Radio);

        QMetaObject::connectSlotsByName(Radio);
    } // setupUi

    void retranslateUi(QWidget *Radio)
    {
        Radio->setWindowTitle(QApplication::translate("Radio", "Form", Q_NULLPTR));
        btn_previous->setText(QString());
        btn_next->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Radio: public Ui_Radio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIO_H

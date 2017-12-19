#-------------------------------------------------
#
# Project created by QtCreator 2017-10-29T20:03:39
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AudioSystem
TEMPLATE = app


SOURCES += main.cpp\
        audiosystem.cpp \
    radio.cpp \
    mp3.cpp

HEADERS  += audiosystem.h \
    radio.h \
    mp3.h

FORMS    += audiosystem.ui \
    radio.ui \
    mp3.ui

RESOURCES += \
    resources.qrc

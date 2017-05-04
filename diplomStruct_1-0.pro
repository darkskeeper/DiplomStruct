#-------------------------------------------------
#
# Project created by QtCreator 2017-04-14T12:29:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = diplomStruct_1-0
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    gamewindow.cpp \
    humanplayer.cpp \
    computerplayer.cpp \
    table.cpp \
    tablecards.cpp \
    dealer.cpp

HEADERS  += mainwindow.h \
    settings.h \
    gamewindow.h \
    humanplayer.h \
    computerplayer.h \
    table.h \
    tablecards.h \
    dealer.h

FORMS    += mainwindow.ui \
    settings.ui \
    gamewindow.ui

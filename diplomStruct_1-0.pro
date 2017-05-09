#-------------------------------------------------
#
# Project created by QtCreator 2017-04-14T12:29:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = diplomStruct_1-0
TEMPLATE = app


SOURCES += \
    src/computerplayer.cpp \
    src/dealer.cpp \
    src/gamewindow.cpp \
    src/humanplayer.cpp \
    src/mainwindow.cpp \
    src/settings.cpp \
    src/table.cpp \
    src/tablecards.cpp \
    main.cpp

HEADERS  += \
    src/computerplayer.h \
    src/dealer.h \
    src/gamewindow.h \
    src/humanplayer.h \
    src/mainwindow.h \
    src/settings.h \
    src/table.h \
    src/tablecards.h

FORMS    += \
    UIs/gamewindow.ui \
    UIs/mainwindow.ui \
    UIs/settings.ui

DISTFILES +=

RESOURCES += \
    images.qrc

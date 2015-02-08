QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RandSmash
TEMPLATE = app

RESOURCES = RandSmash.qrc

SOURCES += src/main.cpp\
        src/mainwindow.cpp\
        src/Operacions.cpp\

HEADERS  += src/mainwindow.h\
            src/Operacions.h

FORMS    += src/mainwindow.ui

#-------------------------------------------------
#
# Project created by QtCreator 2015-12-03T19:47:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameWidget
TEMPLATE = app

SOURCES += gamewidget.cpp \
    equationgenerator.cpp \
    mathle.cpp

HEADERS += gamewidget.h \
    equationgenerator.h \
    mathle.h

FORMS   += gamewidget.ui

SOURCES += main.cpp

CONFIG += c++11

RESOURCES += \
    resources.qrc



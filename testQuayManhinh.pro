#-------------------------------------------------
#
# Project created by QtCreator 2016-04-26T14:45:43
#
#-------------------------------------------------

QT       += core gui sensors

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testQuayManhinh
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    orientationsensor.cpp

HEADERS  += widget.h \
    orientationsensor.h

CONFIG += mobility
MOBILITY = 


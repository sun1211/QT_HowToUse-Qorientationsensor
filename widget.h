#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScreen>
#include <QOrientationReading>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "orientationsensor.h"
#include <QApplication>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    OrientationSensor *sendo;
    QScreen *screen;
public slots:
    void showString();
};

#endif // WIDGET_H

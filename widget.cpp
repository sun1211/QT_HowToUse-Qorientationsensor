#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    sendo = new OrientationSensor();
    screen = QApplication::screens().at(0);
    qDebug() << "\n\n\n\n First Status:" << sendo->orientation() << screen->size().width() << screen->size().height();
    connect(sendo,SIGNAL(orientationChanged()),this,SLOT(showString()));



}

Widget::~Widget()
{

}

void Widget::showString()
{

    qDebug() << "status" << sendo->orientation()<< screen->size().width() << screen->size().height();
    if(screen->size().width() < screen->size().height()){
        qDebug() << "portrai";
    }else{
        qDebug() << "lanscape";
    }



}


#ifndef ORIENTATIONSENSOR_H
#define ORIENTATIONSENSOR_H

#include <QObject>
#include <QOrientationFilter>
#include <QDebug>

class OrientationSensor : public QObject, QOrientationFilter
{
    Q_OBJECT
    Q_PROPERTY(Orientation orientation READ orientation NOTIFY orientationChanged)
public:
    enum Orientation {
        Undefined = 0,
        TopUp,
        TopDown,
        LeftUp,
        RightUp,
        FaceUp,
        FaceDown
    };
    Q_ENUMS(Orientation)

    OrientationSensor(QObject *parent = 0);

    // The accessor method for the orientation property
    Orientation orientation() const;

Q_SIGNALS:
    // The change notification signal of the orientation property
    void orientationChanged();

protected:

    bool filter(QOrientationReading *reading);

private:
    // The orientation sensor
    QOrientationSensor m_sensor;

    // The orientation value
    Orientation m_orientation;
};

#endif // ORIENTATIONSENSOR_H

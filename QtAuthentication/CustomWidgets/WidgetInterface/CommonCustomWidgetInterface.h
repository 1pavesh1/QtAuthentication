#ifndef COMMONCUSTOMWIDGETINTERFACE_H
#define COMMONCUSTOMWIDGETINTERFACE_H

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QPainterPath>

class CommonCustomWidgetInterface
{
public:
    virtual void InitializationInterface() = 0;
    virtual void SetupQCC() = 0;
    virtual void LoadContent() = 0;
};

#endif // COMMONCUSTOMWIDGETINTERFACE_H

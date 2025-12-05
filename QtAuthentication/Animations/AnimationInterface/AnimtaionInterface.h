#ifndef ANIMTAIONINTERFACE_H
#define ANIMTAIONINTERFACE_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>

class AnimationInterface
{
public:
    QRect                       startRect;
    QRect                       endRect;

    QGraphicsOpacityEffect      *opacityEffect;
    QParallelAnimationGroup     *group;
    QPropertyAnimation          *posAnimation;
    QPropertyAnimation          *opacityAnimation;
    QPropertyAnimation          *heightAnimation;

    virtual void OpenAnimation(QObject *parent, QWidget *frame) = 0;
    virtual void CloseAnimation(QObject *parent, QWidget *frame) = 0;
};

#endif // ANIMTAIONINTERFACE_H

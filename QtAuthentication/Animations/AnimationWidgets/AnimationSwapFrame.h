#ifndef ANIMATIONSWAPFRAME_H
#define ANIMATIONSWAPFRAME_H

#include "../AnimationInterface/AnimtaionInterface.h"

class AnimationSwapFrame : public AnimationInterface
{
public:
    void OpenAnimation(QObject *parent, QWidget *frame) override
    {
        startRect = endRect = frame->geometry();

        opacityEffect       = new QGraphicsOpacityEffect(frame);
        posAnimation        = new QPropertyAnimation(frame, "geometry");
        opacityAnimation    = new QPropertyAnimation(opacityEffect, "opacity");
        group               = new QParallelAnimationGroup(parent);

        endRect.setX(0);

        frame->setGraphicsEffect(opacityEffect);
        frame->setVisible(true);
        frame->setGeometry(startRect);

        posAnimation->setDuration(200);
        posAnimation->setStartValue(startRect);
        posAnimation->setEndValue(endRect);

        opacityAnimation->setDuration(200);
        opacityAnimation->setStartValue(0.0);
        opacityAnimation->setEndValue(1.0);

        group->addAnimation(posAnimation);
        group->addAnimation(opacityAnimation);

        group->start();
    }

    void CloseAnimation(QObject *parent, QWidget *frame) override
    {
        startRect = endRect = frame->geometry();

        opacityEffect       = new QGraphicsOpacityEffect(frame);
        posAnimation        = new QPropertyAnimation(frame, "geometry");
        opacityAnimation    = new QPropertyAnimation(opacityEffect, "opacity");
        group               = new QParallelAnimationGroup(parent);

        frame->setGraphicsEffect(opacityEffect);

        endRect.setX(frame->width());

        posAnimation->setDuration(200);
        posAnimation->setStartValue(startRect);
        posAnimation->setEndValue(endRect);

        opacityAnimation->setDuration(200);
        opacityAnimation->setStartValue(1.0);
        opacityAnimation->setEndValue(0.0);

        group->addAnimation(posAnimation);
        group->addAnimation(opacityAnimation);

        QObject::connect(group, &QParallelAnimationGroup::finished, group, [this, frame]() {
            frame->setVisible(false);
        });

        group->start();
    }
};

#endif // ANIMATIONSWAPFRAME_H

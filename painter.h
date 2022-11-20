#ifndef PAINTER_H
#define PAINTER_H
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include "QCursor"

class Painters : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Painters(QObject *parent = 0);
    ~Painters();


private:
    QRectF boundingRect() const;
    void paint_(QPainter *painter);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

};

#endif // PAINTER_H

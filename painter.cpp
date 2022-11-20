#include "painter.h"

Painters::Painters(QObject *parent) :
    QObject(parent), QGraphicsItem()
{

}

Painters::~Painters()
{

}

QRectF Painters::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void Painters::paint_(QPainter *painter)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-30,-30,60,60);
}

void Painters::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    /* Устанавливаем позицию графического элемента
     * в графической сцене, транслировав координаты
     * курсора внутри графического элемента
     * в координатную систему графической сцены
     * */
    this->setPos(mapToScene(event->pos()));
}

void Painters::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    /* При нажатии мышью на графический элемент
     * заменяем курсор на руку, которая держит этот элемента
     * */
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void Painters::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    /* При отпускании мышью элемента
     * заменяем на обычный курсор стрелку
     * */
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

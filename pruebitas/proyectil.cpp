#include "proyectil.h"
#include <QTimer>
#include <QGraphicsScene>
#include "QDebug"
#include <QList>
#include "enemigo.h"

proyectil::proyectil()
{
    setRect(100,300,10,10);
    QTimer *timer= new QTimer;
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void proyectil::move()
{
    QList <QGraphicsItem *> colliding_items= collidingItems();
    for(int i=0,n=collidingItems().size();i<n;++i){
        if(typeid (*(colliding_items[i]))==typeid (enemigo)){
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    setPos(x()+10,y());
    if(pos().x()+rect().height()>450){
        scene()->removeItem(this);
        delete this;

    }

}

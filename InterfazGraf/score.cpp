#include "score.h"

score::score(QGraphicsItem *parent)
{
    puntaje=0;
    setPlainText(QString("score")+QString::number(puntaje));
    setDefaultTextColor(Qt::darkBlue);
    //setFont(QFont())
}

void score::incrementar()
{

}

void score::getPuntaje()
{

}

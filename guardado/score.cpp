#include <score.h>
#include <QFont>

score::score(QGraphicsItem *parent)
{
    // inciar el puntaje
    scores = 0;

    // dibujar el texto

    setPlainText(QString("Score: ")+QString::number(scores));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void score::increase()
{
    scores+=10;
    setPlainText(QString("Score: ")+QString::number(scores));
}

int score::getScore()
{
    return scores;
}

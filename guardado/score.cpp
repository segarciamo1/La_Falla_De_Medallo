#include <score.h>
#include <QFont>

score::score(QGraphicsItem *parent)
{
    scores=0;
    setPlainText(QString("Score: ")+QString::number(scores));
    setDefaultTextColor(Qt::darkRed);
    setFont(QFont("times",16));
}

void score::increase()
{
    static int conta=10;
    setScores(conta);
    setPlainText(QString("Score que esperamos que suba:  ")+QString::number(scores));
    qDebug() << "estoy entrando a increase en el uktimo"<<scores;
    conta +=10;
}

int score::getScore()
{
    static int contador=scores;
    return contador;
}

int score::getScores() const
{
    return scores;
}

void score::setScores(int newScores)
{
    scores = newScores;
}

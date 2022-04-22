#include <score.h>
#include <QFont>

score::score(QGraphicsItem *parent)
{

    setPlainText(QString("Score: ")+QString::number(scores));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void score::increase()
{
    static int conta=10;
    qDebug() << "estoy entrando a increase"<<scores;
    setScores(getScores()+conta);
    setPlainText(QString("Score:  ")+QString::number(scores));
}

int score::getScore()
{
    return scores;
}

int score::getScores() const
{
    return scores;
}

void score::setScores(int newScores)
{
    scores = newScores;
}

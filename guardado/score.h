#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>

class score: public QGraphicsTextItem{
public:
    score(QGraphicsItem * parent = 0);
    void increase();
    int getScore();

    int getScores() const;
    void setScores(int newScores);

private:
    int scores=0;
};

#endif // SCORE_H

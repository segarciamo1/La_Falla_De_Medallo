#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>

class score: public QGraphicsTextItem{
public:
    score(QGraphicsItem * parent = 0);
    void increase();
    int getScore();

private:
    int scores;
};

#endif // SCORE_H

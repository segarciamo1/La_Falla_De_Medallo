#ifndef SCORE_H
#define SCORE_H
 #include <QGraphicsTextItem>

class score:public QGraphicsTextItem
{
public:
    score(QGraphicsItem *parent=0);
    void incrementar();
    void getPuntaje();
private:
    int puntaje;
};

#endif // SCORE_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsLineItem>
#include <QKeyEvent>
#include <QPainter>
#include <QTimer>
#include <iostream>
#include <vector>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QGraphicsLineItem>
#include <QRect>
#include <QKeyEvent>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void actualizar();

private slots:
    void on_pushButton_2_clicked();

    //void keyPressEvent(QKeyEvent *ev);
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    QTimer *timer;
    QMainWindow *w2,*w3;
    QGraphicsScene *s2,*s3;
    QGraphicsView *v2,*v3;
    QPushButton *b2;
    QLabel *a,*w,*s,*d,*h,*nombre;
    QTextEdit *nombreEditable;
    QGraphicsLineItem *l1,*l2,*l3,*l4;



};
#endif // MAINWINDOW_H

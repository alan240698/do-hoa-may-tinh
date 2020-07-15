#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = 0);
     //Cac su kien ve
     void paintEvent(QPaintEvent *);

     //Khai bao ham de thuc hien ve
     void drawPicture(QPainter& painter);  //ve anh
     void drawWhell(QPainter& painter, int x, int y, int angle);  //banh xe sau
     void drawHouse(QPainter& painter);    //ve ngoi nha
     void drawMountain(QPainter& painter); //ve nui
     void drawRoad(QPainter& painter);
     void drawTree(QPainter& painter);     //ve cay
     void drawCar(QPainter& painter,int x, int y, double position); //ve xe hoi
     void drawWindMill(QPainter& painter); //ve than coi xoay gio
     void drawSky(QPainter& painter);      //ve bau troi
     void drawStar(QPainter &painter);     //ve mot ngoi sao
     void drawStars(QPainter &painter);    //ve nhieu ngoi sao
     void drawButterfly(QPainter& painter);//ve buom bay
     void drawRotary(QPainter& painter);   //ve canh coi xoay gio
     void drawWalkMan(QPainter& painter);  //ve nguoi di bo
     void drawMoon(QPainter& painter);      //ve mat trang
     void drawHaw(QPainter& painter);      //ve hang rao
     //cac phep quay
     QPoint quay(QPoint p, QPoint c,int deta); //banh xe, buom bay
     QPointF quay1(QPointF BD,double kc,double huong);//ngan sao
     QPointF quaynew(QPointF p1, QPointF c1, int deta1); //coi xoay gio

     //khai bao ve coi xoay gio
     int angle1;
     int h1=height();
     int w1=width();
     void Rotary(QPainter& painter);
     QPointF pstart10,pcenter10,pnew00,pnew11,pnew12,pnew13,pnewgoc,pnew14,pnew15;

     //khai bao ve ngan sao
     int random(int n1,int n2);
     void drawStar(QPainter &painter,QPointF ViTri,QString MaMau,double kich,double xoay,double soCanh);
     QVector<QPointF> vitriSao;
     QVector<QString> mausacSao;
     QVector<double> kichthuocSao;
     QPointF HT;
     double ViTri;

     //ve buom nay
     int random1(int n3);

     //ve nguoi di bo
     double hinh;
     QPixmap spritesheet;

     //khai bao su kien timeEvent
     void timerEvent(QTimerEvent *);
     double position, position01, position1, position2, position3,position4;
     double timerId;
     double h=height();
     double w=width();
     QPoint pstart,pstart1,pstart2,pstart3,pcenter,pcenter1,pnew,pnew1,pnew2,pnew3;
     int angle;




signals:

public slots:

};

#endif // GRAPHICS_H

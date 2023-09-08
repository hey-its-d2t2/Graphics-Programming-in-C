 #include <graphics.h>

#include <stdlib.h>

#include <stdio.h>

#include <conio.h>

void main()

{

int gd = DETECT, gm ;

initgraph(&gd, &gm,"C:\\turboc3\\bgi");

setcolor(2);

settextstyle(11, 3, 5);

outtextxy(200,200,"Deepak Singh  !");

getch();

closegraph();

}

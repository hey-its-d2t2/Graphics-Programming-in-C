#include <graphics.h>

#include <stdlib.h>

#include <stdio.h>

#include <conio.h>

void main()

{

int gd = DETECT, gm;

int x1,y1,x2,y2;

initgraph(&gd, &gm,"C:\\turboc3\\bgi");

x1=100;

y1=100;

x2=450;

y2=450;

setcolor(2);

setlinestyle(1,0,1);

line(x1,y1,x2,y2);

getch();

closegraph();

}

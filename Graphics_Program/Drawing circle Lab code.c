#include <graphics.h>

#include <stdlib.h>

#include <stdio.h>

#include <conio.h>

void main()

{

int gd = DETECT, gm;

int midx, midy;

int radius = 100;

initgraph(&gd, &gm,"C:\\turboc3\\bgi");

midx = getmaxx() / 2;

midy = getmaxy() / 2;

setcolor(2);

circle(midx, midy, radius);

getch();

closegraph();

getch();

}

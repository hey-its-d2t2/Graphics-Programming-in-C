/* C Code to implement getimage(),putimage() and imagesize() Function

Author :- shinde prashant

Copyright :- 2015 */

#include<stdio.h>

#include<conio.h>

#include <graphics.h>

void main()

{

int gd = DETECT,gm;

void *img;

unsigned img_size;

initgraph(&gd,&gm,"C:\\turboc3\\bgi");

setfillstyle(1,2);

rectangle(100,100,520,300);

floodfill(110,110,WHITE);

circle(300,200,50);

circle(270,189,8);

circle(328,189,8);

getch();

/*Calculating amount of memory to store the image */

img_size = imagesize(100,100,520,300);

img = malloc(img_size);

/*store the image into memory */

getimage(100,100,520,300,img);

cleardevice();

rectangle(100,100,520,300);

outtextxy(210,110,"IMAGE SAVED INTO MEMORY");

getch();

/*This stores the image on screen which is saved with the Help

of getimage() into memory */

putimage(100,100,img,COPY_PUT);

outtextxy(150,260,"NOW AGAIN PLOTTING SAME IMAGE ON SCREEN");

getch();

free(img);

closegraph();

}

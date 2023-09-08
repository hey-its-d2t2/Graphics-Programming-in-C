/* C Code to implement ascii value & scan code

Author :- shinde prashant

Copyright :- 2015 */

#include<stdio.h>

#include<conio.h>

void main()

{

char ch;

clrscr();

printf("Press Any key on Keyboard !");

ch=getch();

printf("\nAscii code = %d",ch);

if ( ch==0)

{

ch=getch();

printf("\nscan code = %d",ch);

}

getch();

}

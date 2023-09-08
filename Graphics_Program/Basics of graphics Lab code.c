/* C Code to access Text video memory

Author :- shinde prashant

Copyright :- 2015 */

#include<stdio.h>

#include<conio.h>

void main()

{

char fat *ptr=(char *)0xB8000000;

*ptr='C';

*(ptr+1)=4;

getch();

}

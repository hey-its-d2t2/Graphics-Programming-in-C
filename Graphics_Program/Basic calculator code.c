/* C Code to implement Basic Calculator

Author :- shinde prashant

Copyright :- 2015

*/

#include<stdio.h>

#include<conio.h>

void main()

{

char ch;

int a,b;

clrscr();

printf("\nEnter 1 for Addition ");

printf("\nEnter 2 for Substraction ");

printf("\nEnter 3 for Multiplication ");

printf("\nEnter 4 for Division ");

printf("\nEnter your choice !");

scanf("%c",&ch);

switch(ch)

{

case '1' : printf("\nEnter any two values !");

scanf("%d %d",&a,&b);

a=a+b;

printf("\nThe Addition of two numbers is %d ",a);

break;

case '2' : printf("\nEnter any two values !");

scanf("%d %d",&a,&b);

a=a-b;

printf("\nThe substraction of two numbers is %d ",a);

break;

case '3' : printf("\nEnter any two values !");

scanf("%d %d",&a,&b);

a=a*b;

printf("\nThe Multipication of two numbers is %d ",a);

break;

case '4' : printf("\nEnter any two values !");

scanf("%d %d",&a,&b);

a=a/b;

printf("\nThe Division of two numbers is %d",a);

break;

default :

printf("\nYou Enter a Wrong choice !");

break;

}

getch();

}

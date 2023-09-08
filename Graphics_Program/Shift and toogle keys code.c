/* C Code to implement Shit & Toggle Keys

Author :- shinde prashant

Copyright :- 2015 */

#include<stdio.h>

#include<conio.h>

#include<dos.h>

void main()

{

char far *key;

/*The key is pointing to memory address 0x417 where is monitors the

status of toggle keys where they are on / off */

key=(char far*)0x417;

while(1)

{

clrscr();

printf("\nPress ALT key to quit");

if(*key&1)

printf("\nRight Shift is pressed");

if(*key&2)

printf("\nLeft Shift is pressed");

if(*key&4)

printf("\nCtrl Lock is pressed");

/*Setting this Key to quit when alt key is pressed */

if(*key&8)

break;

if(*key&16)

printf("\nScroll lock is activated");

if(*key&32)

printf("\nNum lock is activated");

if(*key&64)

printf("\nCaps lock is activated");

if(*key&128)

printf("\nInsert is activated");

delay(99);

}

}

/*
 ============================================================================
 Name        : pointers.c
 Author      : Manush Sir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int Number = 35;
     int *ip;
     ip = &Number;

     printf("The value of Number is:%d\n",Number);
     printf("The address of Number is:%d\n",&Number);
     printf("The address of pointer is:%d\n",ip);
     printf("The value of Pointer is:%d\n",*ip);
     return(0);

}

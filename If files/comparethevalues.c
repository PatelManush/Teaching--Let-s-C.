/*
 ============================================================================
 Name        : haa.c
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

            int a ;
            printf ("Enter a number:\n");
            scanf("%d",&a);

            if (a == 10)
            {
            	printf ("The value of integer is equal to 10.");
            }
            else if (a==20)
            {
            	printf ("The value of integer is equal to 20.");
            }
            else
            {
            	printf("none of the above value is true.");
            }

            printf("\nThe correct value of the integer is: %d\n", a);

            return 0;
}

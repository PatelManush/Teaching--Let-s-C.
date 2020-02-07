/*
 * Ifstatement.c
 *
 *  Created on: Feb. 6, 2020
 *      Author: Manush
 *      The following is known as Finding even and odd number.
 *      whatever you do , still you will end up to be a looser.
 */


#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number,dear\n");
	scanf("%d",&a);

	if(a%2 ==0)
	{
	printf("It is an even number");
	}
	else
	{
	printf("It is an odd number");
	}
	return (0);

}

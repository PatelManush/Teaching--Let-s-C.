/*
 * Ifstatement.c
 *
 *  Created on: Feb. 6, 2020
 *      Author: Manush
 *      The following is known as game for looser.
 *      whatever you do , still you will end up to be a looser.
 */


#include<stdio.h> //library file//

int main() // main function of the programme//
{
	int a;
	printf("Enter a number,dear\n");
	scanf("%d",&a);

	if(a >= 1)
	{
	printf("Lol,you are a looser");
	}
	else
	{
	printf("you are still a loser");
	}
	return (0);

}



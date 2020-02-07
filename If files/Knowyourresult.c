/*
 * Ifstatement.c
 *
 *  Created on: Feb. 6, 2020
 *      Author: Manush
 *      The following is known C ifelse ladder.
 *      here we enter the marks of student and try to figure out his result.
 *      whatever you do , still you will end up to be a looser.
 */


#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the marks,dear\n");
	scanf("%d",&marks);

	if(marks ==50)
	{
	printf("Your grade is c,you will die in Toronto");
	}
	else if(marks<=50)
	{
	printf("You have failed your test, go work at Shitty place");
	}
	else if(marks > 50)
	{
		printf("You passed the test, you will get a job");
	}
	else if(marks > 90)
	{
		printf("You will have a house in california");
	}
	return (0);

}



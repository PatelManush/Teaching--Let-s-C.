/*
 ============================================================================
 Name        : gooodbye.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char name[20];
char color[20];
int main(void)
{

	printf("Hey what's your name ?\n");
	scanf ("%s",&name);
	printf("Well nice to meet you %s",name);
	printf("\nWhat's your favorite color?");
	scanf("%s",&color);
	printf("\n%s's Favorite color is %s",name,color);
	return EXIT_SUCCESS;
}

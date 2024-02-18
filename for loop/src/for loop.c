/*
 ============================================================================
 Name        : for.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
	setbuf(stdout, NULL);
	int i ;
	printf("enter the number: ");
	scanf("%d",&i);
	for( i; i <= 10; i++)
	{
		printf("\n the value is %d",i);
	}
	return EXIT_SUCCESS;
}

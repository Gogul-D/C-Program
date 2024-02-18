/*
 ============================================================================
 Name        : positive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	//input
	int a ;
	printf("enter the number:");
	scanf("%d",&a);
	//condition check
	if (a>0)
	{
		printf("the number is positive");//positive grater  than 0
	}
	else if(a==0) {

			printf("the number is 0");
	}
	else {

		printf("the number is negative");// Negative less than 0
	}
		return EXIT_SUCCESS;
}


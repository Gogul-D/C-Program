/*
 ============================================================================
 Name        : relational.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a =0;
	int b =1;
	int c =12;
	int d =11;

	printf("the value a is less than b %d\n",a<b); /* less value*/
	printf("the value a is greater than b %d \n",a>b);/* greater value*/
	printf("the value a is equal to b %d\n",a==b);
	printf("the value a is least to b %d\n",c<=d);
	printf("the value a is not equal to b %d",a!=b);
	printf("the value a is greatest b %d",c>=d);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : if.c
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
	int a ;
	int b ;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	if (a==b)
	{
		printf("the number a and b is equal");

	}
	else if(a>b){

			printf("the number a is grater than b");
		}
	else {

		printf("the two condition is false");
	}
		return EXIT_SUCCESS;
}


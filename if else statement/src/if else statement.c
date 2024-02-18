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
	printf("enter the number:");/*get the input from user printer statement*/
	scanf("%d",&a);/*get the input from user*/
	if (a%2==0) /*Condition of the function*/
	{
		printf("the number is even");/*condition is true*/

	}
	else {

		printf("the number is odd");/*condition is false*/
	}
		return EXIT_SUCCESS;
}

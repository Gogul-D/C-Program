/*
 ============================================================================
 Name        : leap.c
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
	 int year;
	printf("enter the year:");
	scanf("%d",&year);
	if (year % 400 ==0)
	{
		printf("%d  leap year",year);

	}
	else if(year % 100 ==0){

			printf("%d non leap year ",year);
		}
	else if(year % 4==0){

				printf("%d leap year ",year);
			}
	else {

		printf("%d non leap year",year);
	}
		return EXIT_SUCCESS;
}


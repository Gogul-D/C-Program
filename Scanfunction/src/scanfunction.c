/*
 ============================================================================
 Name        : scanfunction.c
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
	 int integer;
	 char character;
	 float inputfloat;
	 printf("enter the character:");
	 scanf("%c",&character);
	 printf("enter the integer:");
	 scanf("%d",&integer);
	 printf("enter the float:\n");
	 scanf("%f",&inputfloat);
	 printf("\n the character is: %c",character);
	 printf("\n the integer is: %d",integer);
	 printf("\n the float is: %f",inputfloat);

		return EXIT_SUCCESS;
	}


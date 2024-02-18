/*
 ============================================================================
 Name        : dowhile.c
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
	int i=0,a;
	do {
		a=i+2;
		i++;
		printf("\n%d",a);
	} while (i<=1);
	return EXIT_SUCCESS;
}

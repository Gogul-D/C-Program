/*
 ============================================================================
 Name        : Factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout,NULL);
	int i=1, n, fact=1;
	printf(" enter the number n: ");
	scanf("%d",&n);

	while(i<=n) {

		fact=fact*i;

		i++;
		}
	printf("\n the natural number is:%d",fact);

	return EXIT_SUCCESS;
}


/*
 ============================================================================
 Name        : sum.c
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
	int i, n, sum=0;
	printf(" enter the number n: ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		sum=sum+i;

		}
	printf("\n the natural number is:%d",sum);

	return EXIT_SUCCESS;
}

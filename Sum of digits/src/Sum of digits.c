/*
 ============================================================================
 Name        : Sum.c
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
	int n,sum=0;
	printf("enter the value n: ");
	scanf("%d",&n);
	while(n>0){

		sum=sum+(n%10);
		n=n/10;
	}
	printf("the sum of the digit is:%d",sum);
	return EXIT_SUCCESS;
}

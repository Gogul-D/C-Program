/*
 ============================================================================
 Name        : prime.c
 Author      : Gokul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout ,NULL);
	int Num ,i , m=0 , flag ;
	printf("Enter the number:");
	scanf("%d",&Num);
	m=Num/2;
	for (i = 1; i<=m; i++) {
		if(Num%i==0){
			printf("number is not prime");
		    flag=1;
		    continue;
	}
		if(flag==0){
			printf("number is prime");
			break;
		}
	}

	return EXIT_SUCCESS;
}

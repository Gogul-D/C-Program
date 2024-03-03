/*
 ============================================================================
 Name        : Palindrome.c
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
		int num , remainder ,reverse=0 ,originalnum ;
		printf("enter the number: ");
		scanf("%d",&num);
		originalnum=num;//copy of number value
		while(num!=0){
			remainder = num%10;
			reverse=reverse*10+remainder;
			num /=10;
		}
		if (originalnum == reverse) {
			printf("the given number is palindrome");

		} else {
			printf("the given  not number is palindrome");

		}
	return EXIT_SUCCESS;
}

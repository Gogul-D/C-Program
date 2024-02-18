/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout , NULL);
	//data type
	int day;
	//input from user
	printf("enter the day number: ");
	scanf("%d",&day);
	//switch condition
	switch (day) {
		case 0:
			printf("Sunday");
			break;
		case 1:
					printf("Monday");
					break;
		case 3:
					printf("Tuesday");
					break;
		case 4:
					printf("Wednesday");
					break;
		case 5:
					printf("Thursday");
					break;
		case 6:
					printf("Friday");
					break;
		case 7:
					printf("Saturday");
					break;

		default:
			printf("invalid day ");
			break;
	}
	return EXIT_SUCCESS;
}


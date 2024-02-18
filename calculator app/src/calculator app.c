/*
 ============================================================================
 Name        : calculator.c
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
	//INPUT
	int num1,num2;
	char opp;
	printf("enter the number1: ");
	scanf("%d",&num1);

	printf("enter the number2: ");
	scanf("%d",&num2);

	printf("enter the operator: ");
	scanf("\n%c",&opp);

	if (opp == '+')
	{
		printf("sum:%d",num1+num2);

	}
	else if(opp == '-')
	{
		printf("difference:%d",num1-num2);
	}

	else if(opp == '*')
	{

		printf("product:%d",num1*num2);
	}

	else if(opp == '/')
	{

			printf("Quotient%d",num1/num2);
	}
	else if(opp == '%')
	{

				printf("module%d",num1%num2);
			}
	else{
		printf("Invalid operator");

	}



	return EXIT_SUCCESS;
}

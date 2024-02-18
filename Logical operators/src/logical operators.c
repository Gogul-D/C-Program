/*
 ============================================================================
 Name        : logical.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* And operator  (1,1= 1 )otherwise 0 */
	int a =1;
	int b =0;
	printf("%d\n",a&&b);
	/* OR operator any one is true so true otherwise (0,0=0)*/
	printf("%d\n",a||b);
	/* NOT operator is one operand is used 0 means 1 otherwise 1 means o*/
	printf("%d",!b);
		return EXIT_SUCCESS;
}

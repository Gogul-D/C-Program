/*
 ============================================================================

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num , remainder ,reverse=0 ;
	printf("enter the number: ");
	scanf("%d",&num);
	while(num>0){
		remainder = num%10;
		reverse=reverse*10+remainder;
		num/=10;
		//printf("\n%d value",reverse);
	}
	printf("the reversed number is:%d",reverse);
	return EXIT_SUCCESS;
}

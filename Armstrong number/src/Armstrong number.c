
/*
 * Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are
 the Armstrong numbers.

Let's try to understand why 371 is an Armstrong number.
============================================================================(WORKING FLOW OF ARMSTRONG NUMBER_)
371 = (3*3*3)+(7*7*7)+(1*1*1)
where:
(3*3*3)=27
(7*7*7)=343
(1*1*1)=1
So:
27+343+1=371
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int originalnum,copy ;
	int remainder ;
	int sum=0 ;
	printf(" enter the number:");
	scanf("%d",&originalnum);
	copy = originalnum ; /* copy of the original number used for verification */
	while(originalnum != 0) // condition is given original number is less than 0
	{
		remainder = originalnum%10;//Modulo , store the remainder value of original number
		sum= sum+(remainder*remainder*remainder); // two times multiple of remainder and add (+)sum then store value in the sum
		originalnum =originalnum/10;//original number divided by 10 and quotient store in original number
		}
	if (copy ==sum)// if condition is used for given number as (copy) is == to sum value to check
	{
		printf("\n the number is Armstrong");// true
	}

	else{
		printf("\n the not number is Armstrong");//false
	}

	return EXIT_SUCCESS;
}

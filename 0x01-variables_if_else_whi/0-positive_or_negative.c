#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main assign to a random number to int n 
 * return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	
	scrand(time(0);
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d  is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);

}

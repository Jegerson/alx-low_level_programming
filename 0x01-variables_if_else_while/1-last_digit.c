#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to cut last digit from number
 *
 * This program prints only the last digit of a number
 * Return: 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* getting the last digit of n */
	int last = n%10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if ((last < 6) && (last != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);

	return (0);
}

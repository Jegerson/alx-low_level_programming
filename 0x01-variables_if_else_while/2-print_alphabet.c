#include <stdio.h>

/**
 *main - program prints lowercase alphabets
 *
 *this prints lowercase leters only in one line
 *Return; 0
 */

int main (void)
{
	int x;

	for(x = 'a'; x <= 'z'; x++) 
		putchar(x);				
	return 0;
}
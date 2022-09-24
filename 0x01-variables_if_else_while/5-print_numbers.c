#include <stdio.h>

/**
 * main - program prints the first 9 numbers
 *
 * prints numbers 0 to 9 using putchar
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints hex values
 *
 * program prints hex values
 * Return: 0
 */

int main(void)
{
	int x;
	int i;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

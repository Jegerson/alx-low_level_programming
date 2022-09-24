#include <stdio.h>

/**
 * main - print numbers separated by commas
 *
 * program prints 0 to 9 separated by commas
 * Return: 0
 */

int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		putchar(',');
	}
	putchar('\n');
	return (0);
}

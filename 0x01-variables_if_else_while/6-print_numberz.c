#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * print numbers 0 to 9 using the putchar function
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

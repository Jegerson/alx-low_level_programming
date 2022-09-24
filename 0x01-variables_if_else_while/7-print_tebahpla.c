#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * program prints alphabels from z to a
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}

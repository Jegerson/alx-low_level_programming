#include <stdio.h>

/**
 * main - print all letter minus e and q
 * putchar is the only valid outputfunction
 *
 * ourput letters a to z except e and q
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if  ((x == 'e') || (x == 'q'))
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}

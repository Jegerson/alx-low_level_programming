#include <unistd.h>

/**
*main - function to print a string
*write - function stdio.h function to be used
*
*Description: this program prints without print function
*Return: 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}

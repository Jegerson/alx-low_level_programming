#include <stdio.h>                                                                                                                      

/**
 *main - program prints lowercase alphabets                                                                                             
 *
 *this prints lowercase leters only in one line 
 *
 *Return:0
 */                                                                                                                                  

int main(void)   

{
	int x;
	int i;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);                                                                                                                     
}

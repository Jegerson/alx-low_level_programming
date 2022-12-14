#include <stdlib.h>                                                                                                                     
#include <time.h>                                                                                                                       
#include <stdio.h>                                                                                                                      
                                                                                                                                        
/**                                                                                                                                     
 *
 * main - function to check sign of random values                                                                                       
 * printf - intrisic function for standard output                                                                                       
 *                                                                                                                                      
 *
 * This program tests random values for their signs                                                                                     
 * Return: 0                                                                                                                             */                                                                                                                                                                                                                                                                          
int main(void)                                                                                                                          
{                                                                                                                                       
	int n;                                                                                                       
	
	srand(time(0));                                                                                                                 
	n = rand() - RAND_MAX / 2;                                                                                                      
	if (n > 0)                                                                                                                      
		printf("%d is positive\n", n);                                                                                          
	else if (n == 0)                                                                                                                
		printf("%d is zero\n", n);                                                                                              
	else                                                                                                                            
		printf("%d is negative\n", n);                                                                                          
	return (0);                                                                                                                     
} 

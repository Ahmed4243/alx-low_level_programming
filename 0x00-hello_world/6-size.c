#include<stdio.h>
/**
 * main - entry point
 * no parameters
 *
 * Description: prints something
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %ld byte\n", sizeof(char));
   	printf("Size of int: %ld bytes\n", sizeof(int));
    	printf("Size of float: %ld bytes\n", sizeof(float));
   	printf("Size of double: %ld bytes\n", sizeof(double));
	return (0);
}

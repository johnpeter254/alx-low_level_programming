#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("size of a long int: %lu bytes\n", sizeof(long int));
	printf("size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("size of a float: %lu bytes\n", sizeof(float));
	return (0);
}
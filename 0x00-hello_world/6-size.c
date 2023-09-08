#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
 *
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of a float: %lu bytes(s)", sizeof(float));
	printf("Size of a int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
}


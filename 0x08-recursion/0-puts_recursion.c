#include "main.h"
/**
 * _put_recursion - function name
 * @s: parameter of the function
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
//Function put recursion
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

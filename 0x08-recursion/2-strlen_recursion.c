#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string.
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		length++;
		_print_rev_recursion(s + 1);
	else
		return (length);
}


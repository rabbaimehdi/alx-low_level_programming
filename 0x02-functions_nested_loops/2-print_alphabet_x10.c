#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, co;

	co = 0;
	while (co < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	co++;
	_putchar('\n');

}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
	for (j = i + 1; j < 58; j++)
	{
	for (k = j + 1; k < 58; k++)
	{
		putchar(i);
		putchar(j);
		putchar(k);
		if (i != 55 || j != 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar(10);
	return (0);
}

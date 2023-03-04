#include "main.h"

/**
 * char *_strcat - This function appends the src string to the dest string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;
	int b = 0;

	for (; dest[i] != '\0'; i++)
		c = c + 1;

	for (; src[i] != '\0'; i++)
		b = b + 1;

	for (i = c; i < (c + b); i++)
	{
		dest[i] = src[(i - c)];
	}

	dest[(c + b)] = '\0';
	return (dest);
}

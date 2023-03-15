#include "main.h"

/**
 **_strncat -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that concatenates two strings.
 * Return:  pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}

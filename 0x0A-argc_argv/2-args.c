#include <stdio.h>

/**
 * main - main entry
 * @argc: arg counter
 * @argv:  arg values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

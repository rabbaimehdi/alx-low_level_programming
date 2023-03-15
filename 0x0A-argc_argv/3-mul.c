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

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", argv[1] * arv[2]);
	return (0);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n%10 > 5)
		printf("is %d and is greater than 5\n", n%10);
	else if (n%10 == 0)
		printf("%d and is 0\n", n%10);
	else 
		printf("%d and is less than 6 and not 0\n", n%10);
	return (0);
}

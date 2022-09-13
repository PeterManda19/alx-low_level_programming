#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return: (0)
 */

int main(void)
{
	long int i;
	long int prev = 1;
	long int post = 2;

	printf("%lu", prev);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", post);
		post += prev;
		prev = post - prev;
	}
	printf("\n");
	return (0);
}

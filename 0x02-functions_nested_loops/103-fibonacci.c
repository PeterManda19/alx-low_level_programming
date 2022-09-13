#include <stdio.h>

/**
 * main - prints sum of even numbers in fibonacci sequence
 *
 * Return: (0)
 */

int main(void)
{
	long int constraint = 4000000;
	long int prev = 0;
	long int post = 1;
	long int i = 0;
	long int total = 0;

	while (constraint > i)
	{
		i = prev + post;

		if ((i % 2) == 0)
		{
			total += i;
		}
		prev = post;
		post = i;
	}
	printf("%li\n", total);
	return (0);
}

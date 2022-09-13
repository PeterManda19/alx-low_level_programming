#include <stdio.h>

/**
 * main - first 98 Fibonacci numbers starting from 1
 *
 * Return: (0)
 */

int main(void)
{
	long int i;
	long int prev = 1;
	long int post = 2;
	long int constraint = 1000000000;	
	long int prev1;
	long int prev2;
	long int post1;
	long int post2;

	printf("%lu", prev);

	for (i = 1; i < 91; i++)
	{
		printf(",%lu", post);
		post += prev;
		prev = post - prev;
	}
	prev1 = (prev / constraint);
	prev2 = (prev % constraint);
	post1 = (post / constraint);
	post2 = (post % constraint);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", post1 + (post2 / constraint));
		printf("%lu", post2 % constraint);
		post1 = post1 + prev1;
		prev1 = post1 - prev1;
		post2 = post2 + prev2;
		prev2 = post2 - prev2;
	}
	printf("\n");
	return (0);
}

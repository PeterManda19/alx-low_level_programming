#include <stdio.h>
/**
 * main - sums and prints all multiples of 3 or 5 below 1024
 *
 * Return (0)
 */
int main(void)
{
	int i = 0;
	int x3 = 3;
	int x5 = 5;
	int total = 0;
	int constraint = 1024;

	while (i == 0)
	{
		if (x3 < constraint)
		{
			total += x3;
			x3 += 3;
		}

		if (x5 < constraint && (x5 % 3) != 0)
		{
			total += x5;
			x5 += 5;
		}
		else if (x5 % 3 == 0)
		{
			x5 += 5;
		}
		else if (x3 >= constraint && x5 >= constraint)
		{
			i = 1;
		}
	}
	printf("%d\n", total);
	return (0);
}

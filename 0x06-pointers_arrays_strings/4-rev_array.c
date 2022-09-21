#include "main.h"

/**
 * reverse_array - reverse
 * @a : pointer to int params
 * @n : pointer to int params
 * Retrun: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

#include "main.h"

/**
 * _islower - checks for a lowercase character
 *
 * @i: letter being tested
 *
 * Return: (0)
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

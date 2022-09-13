#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet = 97;

	while (alphabet <= 122)
	{
		_putchar (alphabet);
		alphabet++;
	}
	_putchar ('\n');
}

#include <unistd.h>

/**
 * _putchar -prints the character c
 * @c: The character to print
 *
 * Return: On success 1
 * -1 is returned on error and errno is set accordingly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

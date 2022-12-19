#include "main.h"

/**
 * _puts - puts a string to stdout
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar(10);
}

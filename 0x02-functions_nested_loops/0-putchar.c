#include "main.h"

/**
 * main - entry point
 *
 * Return: On success 0.
 */

int main(void)
{

	char *sh = "_putchar";

	while (*sh)

	{
		_putchar(*sh);
		sh++;
	}

	_putchar('\n');

	return (0);

}

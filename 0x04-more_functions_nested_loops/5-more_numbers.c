#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * 
 * Return: 10 times of the numbers since 0 up to 14
 */

void more_numbers(void)
{
	int i, r;

	for (i = 0; i < 10; i++)

	{
		for (r = 0; r <= 14; r++)

		{
			if (r > 9)
			{
				_putchar((r / 10) + '0');

			}
			_putchar((r % 10) + '0');

		}

		_putchar('\n');
	}
}

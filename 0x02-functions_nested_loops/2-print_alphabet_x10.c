#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
			y++;
	}
}

#include "main.h"

/**
 * print the alphabet in lowercase ten times
 */
void print alphabet_x10(void);
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
#include "main.h"

/**
 * print_alphabet - print all aplhabets in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_Putchar('\n');
}

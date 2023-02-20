#include <stdio.h>

/**
 * main - prints alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * Main - A program that prints all single digit numbers of base 10 starting from 0
 *
 * and starts with a new line
 *
 * Return: Always 0
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}

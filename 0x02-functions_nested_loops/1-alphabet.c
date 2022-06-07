#include "0-putchar.c"
#include "main.h"
#include "_putchar.c"

/**
 * main - prints the alphabet, in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

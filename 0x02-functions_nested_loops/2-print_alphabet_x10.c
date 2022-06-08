#include "main.h"
/**
* main - is a function that prints 10 times the alphabet, in lowercase
* followed by a new line
* Return: 0
*/

void print_alphabet_x10(void)
{
	int count;
	int x;

	count = 0;

	while (count < 10)
	{
		for (x = 97; x <= 122; x++)
			_putchar(x);
		_putchar('\n');
		count++;
	}
}

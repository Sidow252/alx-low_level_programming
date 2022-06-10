#include "main.h"

/**
 * main - a function that draws a straight line in the terminal.
 * followed by a new line
 */

void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
/* print i spaces */
for (j = 0; j < i; j++)

_putchar(' ');

_putchar('\\');

_putchar('\n');

}

if (n <= 0)
_putchar('\n');
}

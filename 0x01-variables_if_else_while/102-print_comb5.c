#include <stdio.h>

/**
 * prints all possible combinations of two two-digit numbers.
 * two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
			        putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99);
				{
					putchar(',')
					putchar('');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	if (alphabet == 'e' || alphabet == 'q')
	alphabet++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase on same line
 * followed by new line
 * Return:mAlways 0 (Success)
 int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
alphabet = 'A';
while (alphabet <= 'Z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}

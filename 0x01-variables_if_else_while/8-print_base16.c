#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char ch;

	for (num = 48; num <= 56; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; ch <= 'f'; ch++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

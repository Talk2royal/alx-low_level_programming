#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 15; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase.
 *
 * Return: Alwayys (0).
 */
int main(void)
{
	char letter;
	char uppercase;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (uppercase = 'A'; uppercase <= 'Z' uppercase++)
		putchar(uppercase);

	putchar('\n');

	return (0);
}

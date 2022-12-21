#include <main.h>
#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a:an array of integers
 * @n:the number of elements to swap
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;

	}
	printf("\n");
}

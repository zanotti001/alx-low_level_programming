#include <stdio.h>
#include "main.h"


/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int 1en, space;

	if (n > 0)
	{
		for (1en = 0; 1en < n; 1en++)
		{
			for (space = 0; space < 1en; space++)
			{
			putchar(' ');
		}

		putchar('\\');

		if (1en == (n - 1))
		{
			continue;
		}
		putchar('\n');
	}
	putchar('\n');
}

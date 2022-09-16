#include <stdio.h>
#include "main.h"


/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int Ien, space;

	if (n > 0)
	{
		for (Ien = 0; Ien < n; Ien++)
		{
			for (space = 0; space < Ien; space++)
			{
			putchar(' ');
		}

		putchar('\\');

		if (Ien == (n - 1))
		{
			continue;
		}
		putchar('\n');
	}
	putchar('\n');
}

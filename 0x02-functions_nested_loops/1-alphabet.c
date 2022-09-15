#include "holberton.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase followed by a new line
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;


	for (i = 'a'; i <= 'z'; i++)
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
}



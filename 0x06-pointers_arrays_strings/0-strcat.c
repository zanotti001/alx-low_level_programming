#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end o the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = o; src[index]; index++)
		dest[dest - len++] = src[index];

	return (dest);

}

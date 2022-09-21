#include "main.h"
/**
 * _strncpy - c function that copies a string, including the
 * terminating null bytes, using at most an inputted number of bytes.
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * Works identically to the sandard library function 'strncpy'.
 * @dest: buffer storing thre string copy
 * @src: the source string
 * @n: max number of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to spot s with c or null
 */
char *_strchr(char *s, char c)
{
int i;

for (i = o; *(s + i); i++)
{
if (*(s + i) == c)
{
return (s + 1);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
}

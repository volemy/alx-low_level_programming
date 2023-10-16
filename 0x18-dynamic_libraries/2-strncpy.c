#include "main.h"
/**
 * *_strncpy - function that co[ies a string
 * @dest: destination
 * @src: source
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int n;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

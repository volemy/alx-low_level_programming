#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Description: function appends the src to the dest string
 * terminating null byte at end of dest and then adds terminating null byte
 *
 * Return: dest (pointer to dest)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
		a++;

	while (*(src + b))
	{
		*(dest + a) = *(src + b);
			a++;
			b++;
	}

	return (dest)

}

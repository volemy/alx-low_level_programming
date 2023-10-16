#include "main.h"
#include <stdio.h>
/**
 *  _strlen -  a function that returns the length of a string
 *  @s:string to get length of
 *
 *  Return: length of @ s .
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}

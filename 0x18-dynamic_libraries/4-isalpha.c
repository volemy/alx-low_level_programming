#include "main.h"
/**
 * _isalpha - function checks for alphabetic characters
 * @c: character to be checked
 *
 * Description: This function checks if given character is an alphabet
 *              It returns 1 if it is an alphabet  and 0 otherwise
 * Return: 1 if c is a letter, otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);
	else
		return (0);
}

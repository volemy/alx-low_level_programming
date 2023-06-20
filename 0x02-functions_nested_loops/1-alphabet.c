#include "main.h"
/**
 * print_alphabet - A function that prints all alphabets in lowercase
 *
 * Description: check if it prints all alphabets in lowercase from 'a' to 'z'
 * Uses the _putchar function to output all characters.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);

	_putchar(10);

}


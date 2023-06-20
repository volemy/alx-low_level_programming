#include "main.h"
/**
 * main - A program thats prints all alphabets in lowercase
 *
 * Description: check if it prints all alphabets in lowercase
 *
 * print_alphabet - print all alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);

	_putchar(10);
}


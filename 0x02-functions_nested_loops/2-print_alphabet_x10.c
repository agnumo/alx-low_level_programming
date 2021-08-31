#include "main.h"

/**
 * print_alphabet_x10(void) - prints 10 time the alphabet,
 * in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch'*'10);
		ch++;
	}
	_putchar('\n');
}

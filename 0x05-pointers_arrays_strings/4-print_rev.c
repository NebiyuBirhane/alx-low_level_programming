#include "main.h"

/**
 * print_rev - imprime en reverse.
 * @s:string
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int a;
	
	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (a = i; a > 0; a--;)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}


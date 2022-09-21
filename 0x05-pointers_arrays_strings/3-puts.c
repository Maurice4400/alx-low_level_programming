#include "main.h"
#include <stdio.h>


/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		&*str++
	}
	_putchar('\n');
}

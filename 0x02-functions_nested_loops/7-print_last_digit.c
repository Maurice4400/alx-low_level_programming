#include "main.h"
/**
 * print_last_digit - write a function that print the last digit of  anumber
 * @n: argument value of n
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
	int absVal;

	absVal = n % 10;
	if (absVal < 0)
	{
		absVal = absVal * -1;
	}
	_putchar(absVal + '0');
	return (absVal);
}

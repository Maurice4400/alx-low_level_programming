#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: is a letter, lowercase or uppercase
 * Return: on 0 or 1 depending on the condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

#include"main.h"
/**
 *_islower - checks if input is lowercase
 *Return: 1 for lowercase character. 0 for the rest.
 *@c: the charcter in ASCII code
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"

/**
  * _print_rev_recursion - check the code for Holberton School students.
  *  * @s: Inputting string
  *   * Return: Always 0.
 *     */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);

	}
}

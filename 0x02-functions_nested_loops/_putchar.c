#include <unistd.h>

/**
 * _putchar - write c to standard output
 * @c: the character to pring
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}

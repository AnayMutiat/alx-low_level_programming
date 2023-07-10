#include "main.h"
#include <unistd.h>

/**
 * _putchar - to write the char c to stdout
 * @c: The char to print
 * Return; on success 1.
 * On error, -1 is returned, and erno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

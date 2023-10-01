#include "main.h"

/**
 * _isdigit - input
 *
 * @c: value
 * return: 1 yes 0 no
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
		return (1);
	else
		return (0);
}

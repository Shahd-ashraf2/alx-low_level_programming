#include "main.h"

/**
<<<<<<< HEAD
 * print_sign - print + if n is greater than zero,
 *            0 if n is zero and - if n is less
 *            than zero.
=======
 * print_sign - print + if n is greater than zero.
 *         0 if n is zero and - if n is less
 *         than zero.
>>>>>>> fed225f1e0ba12ddf0a815302c1c9dec8ed318fa
 *
 * @n: takes integer type input for function.
 *
 * Return: 1 if +, 0 if 0 and -1 if -
<<<<<<< HEAD
*/
=======
 */
>>>>>>> fed225f1e0ba12ddf0a815302c1c9dec8ed318fa

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
	unsigned int ni;
	
	if (n < 0)
        {
		ni = -n;
		_putchar('-');
	} else
        {
		ni = n;
	}

        if (ni / 10) 
        {
		print_number (n1 /10);
	}
_putchar ((ni % 10) + '0');


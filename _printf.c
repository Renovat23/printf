#include "main.h"



/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	print p[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_37}
	}
}



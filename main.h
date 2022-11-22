#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
}op_t;

int _printf(const char *format, ...);
int _putchar(char c);


#endif

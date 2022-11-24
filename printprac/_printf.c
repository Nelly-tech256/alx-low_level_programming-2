#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - prints a string in a formatted way
 * @format: is a character string.
 * @...: variadic parameters
 *
 * Returns: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	va_start(args, format);
	if (format == NULL)//prevents parsing a null pointer
		return (-1);

	while (format[i])//prints each charater of string
	{
		if (format[i] != '%')
		{
		value = write(1,&format[i],1);//write returns a pointer to a string
		                     //value fetches a return value from for write
		count = count + value;
		i++;
		continue;
		}

		if (format[i] == '%')//here we introduce variadic macros
		{
			//expression;

		}
	}

	return (count);

}

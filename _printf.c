#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string. The format string
 * is composed of zero or more directives
 * Return: number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list arguments;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(arguments, format);
	size = handler(format, arguments);

	_putchar(-1);
	va_end(arguments);

	return (size);
}

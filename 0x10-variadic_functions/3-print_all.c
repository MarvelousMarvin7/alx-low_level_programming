#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print character
 * @args: arguments list
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - print numbers
 * @args: arguments list
 *
 * Return: Nothing
 */

void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_float - print decimal numbers
 * @args: arguments list
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * print_string - print string
 * @args: arguments list
 *
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	void (*print_func[])(va_list) = {print_char, print_int, print_float,
					 print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != "cifs"[j])
			j++;

		if (j < 4)
			print_func[j](args);

		if (format[i + 1] && j < 4)
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(args);
}

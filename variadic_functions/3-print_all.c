#include "variadic_functions.h"

/**
 * print_all - Prints any type of data, indicated by the format.
 * @format: List of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j, c = 0;
	char *string;
	const char format_arg[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (format_arg[j])
		{
			if (format[i] == format_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), c = 1;
				break;
			case 's':
				string = va_arg(list, char *), c = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	}
	printf("\n"), va_end(list);
}

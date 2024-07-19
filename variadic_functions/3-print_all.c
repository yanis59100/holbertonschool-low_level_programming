#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - printfs a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char current_format;
    int first = 1;

    va_start(args, format);

    while (format && format[i])
    {
        current_format = format[i];

        if (current_format == 'c' || current_format == 'i' || current_format == 'f' || current_format == 's')
        {
            if (!first)
            {
                printf(", ");
            }
            first = 0;

            switch (current_format)
            {
                case 'c':
                    printf("%c", va_arg(args, int));
                    break;
                case 'i':
                    printf("%d", va_arg(args, int));
                    break;
                case 'f':
                    printf("%f", va_arg(args, double));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        printf("(nil)");
                    else
                        printf("%s", str);
                    break;
            }
        }
        i++;
    }

    printf("\n");
    va_end(args);
}

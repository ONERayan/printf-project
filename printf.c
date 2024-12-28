/*
** EPITECH PROJECT, 2024
** printf
** File description:
** recode printf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int which(char params, va_list ap)
{
    int count = 0;

    if (params == 'c') {
        count += my_putchar(va_arg(ap, int));
    }
    if (params == 'd' || params == 'i') {
        count += my_put_nbr(va_arg(ap, int));
    }
    if (params == 's') {
        count += my_putstr(va_arg(ap, char *));
    }
    if (params == '%') {
        count += my_putchar('%');
    }
    return count;
}

int mini_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int count = 0;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            count += which(format[i], ap);
        } else {
            count += my_putchar(format[i]);
        }
        i++;
    }
    va_end(ap);
    return count;
}

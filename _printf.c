#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 *
 * Return: Printed chars.
*/


int _printf(const char *format, ...)
{
unsigned int i, d_val, r_value = 0;
va_list args;
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
}
else if (format[i + 1] == 'c')
{
_putchar(va_arg(args, int));
i++;
}
else if (format[i + 1] == 's')
{
d_val = print_string(va_arg(args, char*));
r_value += (d_val - 1);
i++;
}
else if (format[i + 1] == '%')
{
_putchar(format[i + 1]);
i++;
}
else if (format[i + 1] == 'd' || format[i + 1] == 'i')
{
r_value += put_int(va_arg(args, int));
i++;
}
r_value++;

}
return (r_value);
}

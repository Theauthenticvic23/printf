#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void write_output(char output[], int *output_index);
int get_custom_flags(const char *format, int *index);
int get_custom_width(const char *format, int *index, va_list args);
int get_custom_precision(const char *format, int *index, va_list args);
int get_custom_size(const char *format, int *index);
int handle_custom_print(const char *format, int *index, va_list args, char output[], int flags, int width, int precision, int size);

/**
 * _printf - Custom printf function
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    int j, total_printed = 0, printed_chars = 0;
    int flags, width, precision, size, output_index = 0;
    va_list args;
    char output[OUTPUT_BUFFER_SIZE];

    if (format == NULL)
        return (-1);

    va_start(args, format);

    for (j = 0; format && format[j] != '\0'; j++)
    {
        if (format[j] != '%')
        {
            output[output_index++] = format[j];
            if (output_index == OUTPUT_BUFFER_SIZE)
                write_output(output, &output_index);
            printed_chars++;
        }
        else
        {
            write_output(output, &output_index);
            flags = get_custom_flags(format, &j);
            width = get_custom_width(format, &j, args);
            precision = get_custom_precision(format, &j, args);
            size = get_custom_size(format, &j);
            ++j;
            printed_chars = handle_custom_print(format, &j, args, output, flags, width, precision, size);
            if (printed_chars == -1)
                return (-1);
            total_printed += printed_chars;
        }
    }

    write_output(output, &output_index);
    va_end(args);
    return (total_printed);
}

/**
 * write_output - Writes the contents of the output buffer if it exists
 * @output: Array of characters
 * @output_index: Index at which to add the next character, represents the length.
 */
void write_output(char output[], int *output_index)
{
    if (*output_index > 0)
        write(1, &output[0], *output_index);
    *output_index = 0;
}

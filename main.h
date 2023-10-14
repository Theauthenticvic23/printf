
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFFER_SIZE 20
#define BUFFER _SIZE 1024
#define OUTPUT_BUFFER_SIZE 1024
/**
 * Struct FormatPair - Represents a format and its associated function.
 */
typedef struct {
    char format;
    int (*function)(va_list, char[], int, int, int, int);
} FormatPair;
int _custom_putchar(char ch);
int _printf(const char *format, ...);
void write_output(char output[], int *output_index);
int get_custom_flags(const char *format, int *index);
int get_custom_width(const char *format, int *index, va_list args);
int get_custom_precision(const char *format, int *index, va_list args);
int get_custom_size(const char *format, int *index);
int handle_custom_print(const char *format, int *index, va_list args, char output[], int flags, int width, int precision, int size);

#endif

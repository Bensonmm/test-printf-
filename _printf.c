#include <stdio.h>
  2 #include <stdarg.h>
  3 #include "main.h"
  4
  5 /* Declare print_buffer function */
  6 void print_buffer(char buffer[], int *buff_ind);
  7
  8 /**
  9  * _printf - Printf function
 10  * @format: format.
 11  * Return: buffer indes chars.
 12  */
 13
 14 int _printf(const char *format, ...)
 15 {
 16         int buffer_index = 0;
 17         char buffer[1024] = {0};
 18
 19         va_list args;
 20         va_start(args, format);
 21
 22         while (*format != '\0')
 23         {
 24                 if (*format == '%')
 25                 {
 26                         format++;
 27                         switch (*format)
 28                                 {
 29                                         case 'd':
 30                 {
 31                 int value = va_arg(args, int);
 32                 buffer_index += sprintf(&buffer[buffer_index], "%d", value);
 33                 break;
 34                 }
 35                                         case 's':
 36                 {
 37                 char *value = va_arg(args, char *);
 38                 buffer_index += sprintf(&buffer[buffer_index], "%s", value);
 39                 break;
 40                 }
 41                                         case 'c':
 42                 {
 43                 char value = (char)va_arg(args, int);
 44                 buffer[buffer_index++] = value;
 45                 break;
 46                 }
 47                                         default:
 48                 {
 49                 buffer[buffer_index++] = '%';
 50                 buffer[buffer_index++] = *format;
 51                 break;
 52                 }
 53                                 }
 54                 }
 55         else
 56         {
 57             buffer[buffer_index++] = *format;
 58         }
 59
 60         format++;
 61     }
 62
 63     va_end(args);
 64
 65     /* Call print_buffer function */
 66     print_buffer(buffer, &buffer_index);
 67
 68     return (buffer_index);
 69 }
 70
 71 /*  print_buffer function */
 72
 73 /**
 74  * print_buffer - Prints the contents of the buffer if it exist
 75  * @buffer: Array of chars
 76  * @buff_ind: Index at which to add next char, represents the length.
 77  */
 78 void print_buffer(char buffer[], int *buff_ind)
 79 {
 80         int i = 0;
 81
 82         while (i < *buff_ind)
 83         {
 84         putchar(buffer[i]);
 85         i++;
 86         }
 87 }

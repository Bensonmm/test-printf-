#ifndef MAIN_H
  2 #define MAIN_H
  3 #include <stdarg.h>
  4 #include <stdio.h>
  5 #include <unistd.h>
  6
  7 #define BUFF_SIZE 1024
  8
  9
 10
 11 /**
 12  * typedef struct fmt fmt_t - Struct op
 13  *
 14  * @fmt: The format.
 15  * @fm_t: The function associated.
 16  */
 17
 18 typedef struct fmt fmt_t;
 19
 20 int _printf(const char *format, ...);
 21
 22
 23 /*functions */
 24 i
 25 int custom_b_conversion_specifier(unsigned int arg);
 26 void binary_converter(unsigned int num);
 27
 28
 29
 30
 31
 32 #endif

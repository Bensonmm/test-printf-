1 #include <limits.h>
  2 #include <stdio.h>
  3 #include "main.h"
  4
  5 /**
  6  * main - Entry point
  7  *
  8  * Return: Always 0
  9  */
 10 int main(void)
 11 {
 12     int len;
 13     int len2;
 14     unsigned int ui;
 15     void *addr;
 16
 17     len = _printf("Let's try to printf a simple sentence.\n");
 18     len2 = printf("Let's try to printf a simple sentence.\n");
 19     ui = (unsigned int)INT_MAX + 1024;
 20     addr = (void *)0x7ffe637541f0;
 21     _printf("Length:[%d, %i]\n", len, len);
 22     printf("Length:[%d, %i]\n", len2, len2);
 23     _printf("Negative:[%d]\n", -762534);
 24     printf("Negative:[%d]\n", -762534);
 25     _printf("Unsigned:[%u]\n", ui);
 26     printf("Unsigned:[%u]\n", ui);
 27     _printf("Unsigned octal:[%o]\n", ui);
 28     printf("Unsigned octal:[%o]\n", ui);
 29     _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
 30     printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
 31     _printf("Character:[%c]\n", 'H');
 32     printf("Character:[%c]\n", 'H');
 33     _printf("String:[%s]\n", "I am a string !");
 34     printf("String:[%s]\n", "I am a string !");
 35     _printf("Address:[%p]\n", addr);
 36     printf("Address:[%p]\n", addr);
 37     len = _printf("Percent:[%%]\n");
 38     len2 = printf("Percent:[%%]\n");
 39     _printf("Len:[%d]\n", len);
 40     printf("Len:[%d]\n", len2);
 41     _printf("Unknown:[%r]\n");
 42     printf("Unknown:[%r]\n");
 43     return (0);
 44 }

# Holberton School Printf Project

This project consists of a custom made printf function for C language that allows different input arguments and options; its development was part of an intensive coding program in Holberton School.

![enter image description here](https://th.bing.com/th/id/R.bb0fe8172c3ebdcb1facea657b52e732?rik=kX0p70jdQkJm2w&pid=ImgRaw&r=0)


# Description

The function _printf() writes output to stdout, the standard output stream with the format and options presented below. It uses an internal buffer of 1024 bytes although it can print larger sets of data. Upon successful execution, this function returns the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value of -1 is returned.The prototype of this function is the next:> ***int _printf(const char _*\*format, ...)***

Meaning that it has one mandatory format argument, and an extra number of arguments that can be none, or many. ****Format of the format string****The format string is a character string starting and ending with double quotes. The format string is composed of zero or more directives; ordinary characters (not %), and conversion specifications, each of which results in fetching zero or more subsequent arguments. ****The conversion specifier****
|Specifier| Description |  
|--|--|  
|****d, i****|The argument ****int**** is converted to a signed decimal notation. If precision is present,it gives the minimum number of digits that must appear; if the converted value requires fewer digits, then it is padded with zeros on the left. Default precision is 1.|  
|****c****|The int argument is converted to an unsigned char and the resulting character is written. The representation of characters is based off the ASCII coding.|  
|****s****|The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed up to (but not including) a null byte (****'\0'****). If precision is specified, then this will determine how many characters are taken into account for printing.|  
|****%****|A ' ****%**** ' character is written and no conversion is made. The specification is as follows: ****%%****. |

## **Compilation/Installation**

The code is compilated using the following line:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

 **-Wall:** Enables all the warnings about constructions.  
**-Wextra :** Enables some extra warning flags that are not enabled by **-Wall**  
**-Werror:** Make all warnings into hard errors.  
**-pedantic:** Issue all the mandatory diagnostics listed in the C standard.  
**-Wno-format:** Disables warnings about printf format (so that you can try any type of format you want) in equivalence to a custom made variadic function.
**-std=gnu89** turns off certain features of GCC that are incompatible with ISO C90 (when compiling C code)

## **Requirements**

Write a function that produces output according to a format. It needs to be able to handle the following cases:
-   `c`
-   `s`
-   `%`
-   `d`
-   `i`
## **Test of code validity**
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

## **Flowchart**

Here is a diagram of the general behaviour of the _printf. The most important functions are presented:
**Printf Flowchart**



![Printf flow chart](https://i.imgur.com/mSfNQCy.png)

**Help Flowchart**

![enter image description here](https://i.imgur.com/GNVGZBX.png)

**Functions Flowchart**
![enter image description here](https://i.imgur.com/pdrI8SB.png)

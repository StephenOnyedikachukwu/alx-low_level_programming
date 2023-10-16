/*puts_half.c (C source file)*/
#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
int length = 0;
int i, start;

/* Calculate the length of the string*/
while (str[length] != '\0') {
length++;
}

/* Determine the starting index for the second half*/
start = (length % 2 == 0) ? length / 2 : (length - 1) / 2;

/* Print the second half of the string*/
for (i = start; i < length; i++) {
_putchar(str[i]);
}

_putchar('\n');
}

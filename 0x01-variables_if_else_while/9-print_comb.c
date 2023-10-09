#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 * numbers separated by ", " in ascending order, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');  /* Convert the digit to its character representation*/
if (digit < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return 0;
}

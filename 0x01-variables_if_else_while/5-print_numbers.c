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
int number;

for (number = 0; number <= 9; number++)
{
printf("%d\n", number);
}
return 0;
}

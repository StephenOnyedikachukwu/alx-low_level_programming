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
char letter = 'z';  /* Start with the letter 'z'*/

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return 0;
}

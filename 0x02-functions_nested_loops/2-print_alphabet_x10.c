#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times, each followed by a new line.
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}

if (i != 9)
{
_putchar('\n');
}
}
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet in order, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;  /* Variable to store the current letter */

    /* Loop through the lowercase alphabet and print each letter */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');  /* Print a newline character to end the line */

    return (0);
}

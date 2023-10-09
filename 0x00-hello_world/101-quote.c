#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the specified message to
 * the standard error and returns 1.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

/* Write the message to the standard error */
write(2, message, 59);

return (1);
}

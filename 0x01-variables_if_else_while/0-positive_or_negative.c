#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
int n;

/* Initialize random number generator with current time as seed */
srand(time(0));

/* Generate a random number between INT_MIN and INT_MAX */
n = rand();

/* Check if n is positive, zero, or negative */
if (n > 0)
{
printf("The number %d is positive\n", n);
}
else if (n == 0)
{
printf("The number %d is zero\n", n);
}
else
{
printf("The number %d is negative\n", n);
}

return (0);
}

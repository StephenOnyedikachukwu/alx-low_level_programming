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
int lastDigit;  /* Declare the variable here */

/* Initialize random number generator with current time as seed */
srand(time(0));

/* Generate a random number between INT_MIN and INT_MAX */
n = rand();

/* Get the last digit of n */
lastDigit = n % 10; /* Assign the value here */

/* Print the last digit of n and determine if it's greater than 5, 0, or less than 6 and not 0 */
printf("Last digit of %d is %d and is ", n, lastDigit);

if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}

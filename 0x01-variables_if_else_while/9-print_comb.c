#include <stdio.h>

/*this is a main function*/

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

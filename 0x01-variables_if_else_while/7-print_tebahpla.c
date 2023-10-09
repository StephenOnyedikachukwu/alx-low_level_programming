#include <stdio.h>

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

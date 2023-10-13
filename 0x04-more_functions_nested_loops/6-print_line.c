#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the number of times '_' should be printed
 */
void print_line(int n)
{
if (n <= 0) {
_putchar('\n');
} else {
int i;
for (i = 0; i < n; i++) {
_putchar('_');
}
_putchar('\n');
}
}

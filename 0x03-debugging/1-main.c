#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/* Comment out the infinite loop by enclosing it in a block comment
while (i < 10)
{
putchar(i);
*/
/* Uncomment the following line to break the loop
// i++;
// }
*/

printf("Infinite loop avoided! \\o/\n");

return (0);
}

#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)

{
int number;

for (number = 48; number <= 57; number++)
{
putchar(number);

if (number == 57)
{
break;
}

putchar(',');
putchar (' ');

}

return (0);

}



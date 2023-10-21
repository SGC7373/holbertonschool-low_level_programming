#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int ro, co, re ;

for (re = 0; re <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
int re = re * c;

if (c > 0)
{
_putchar(',');
_putchar(' ');
}

if (re < 10)
{
_putchar(' ');
}

if (re >= 10)
{
_putchar(re / 10 + '0');
}

_putchar(re % 10 + '0');
}
_putchar('\n');
}
}


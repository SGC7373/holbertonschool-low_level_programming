#include <stdio.h>
#include "main.h"
/**
 *
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
	printf(s);
	_puts_recursion(s +1);
}
else 
{
	putchar('\n');
}
return = (0);
}

#include "main.h"
/**
 *
 */


int _sqrt_recursion(int n, int i)
{
int result;

if (n == 0 || n == 1 || i * i > n)
{
return (1);
}

if (i * i == n)
{
return (i);
}

result = _sqrt_recursion(n, i + 1);
return (result);
}

int _sqrt_recursion(int n)
{
int result;
if (n < 0)
{
return (-1);
}
result = _sqrt_recursion(n, 1);

return (result);  
}

#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; /* 1 represents positive, -1 represents negative */

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            // Check for overflow before the multiplication and addition
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
            {
                if (sign == 1)
                {
                    return INT_MAX;
                }
                else
                {
                    return INT_MIN;
                }
            }

            result = result * 10 + (*s - '0');
        }
        else if (result != 0)
        {
            break;
        }
        s++;
    }

    return result * sign;
}


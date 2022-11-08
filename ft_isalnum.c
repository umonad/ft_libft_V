#include <stdio.h>

int ft_isalnum(int a)
{
    if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A') || (a <= '9' && a >= '0'))
    {
        return(0);
    }
    else
    {
        return(1);
    }
}
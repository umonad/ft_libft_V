#include <stdio.h>

int ft_isascii(int a)
{
    if ((a <= 255 && a >= 0))
    {
        return(0);
    }
    else
    {
        return(1);
    }
}
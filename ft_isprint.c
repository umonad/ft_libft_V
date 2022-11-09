#include <stdio.h>

int ft_isprint(int a)
{
    if (a <= 32 && a >= 0 ) 
    {
        return(0);
    }
    else
    {
        return(1);
    }
}
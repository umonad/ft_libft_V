#include <stdio.h>

int ft_isprint(int a)
{
    if ((a <127 && a > 31)) 
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
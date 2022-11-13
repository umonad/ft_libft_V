#include <stdio.h>

int ft_isdigit(int b)

{
    if (b <= '9' && b >= '0')
    {
        return(1);
    }
    else
        return(0);
}
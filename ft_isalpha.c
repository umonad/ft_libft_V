#include <stdio.h>

int ft_isalpha(char a)
{
    if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
    {
        return(0);
    }
    else
    {
        return(1);
    }
}

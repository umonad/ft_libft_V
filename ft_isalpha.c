#include <stdio.h>

/// @brief 
/// @param a 
/// @return 

int ft_isalpha(int a)
{
    if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
/*
int ft_isalpha(int a)
{
    return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
}
*/


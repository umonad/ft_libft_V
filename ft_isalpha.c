#include <stdio.h>

/// @brief 
/// @param a 
/// @return 
/*int ft_isalpha(int a)
{
    if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
    {
        return(0);
    }
    else
    {
        return(1);
    }
}*/

int ft_isalpha(int a)
{
    return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
}

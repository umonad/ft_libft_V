#include <stdio.h>

/// @brief 
/// @param b 
/// @return 
int ft_isdigit(int b)

{
    if (b <= '9' && b >= '0')
    {
        return(0);
    }
    else
        return(1);
}
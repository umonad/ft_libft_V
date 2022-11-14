#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;

    if(c == 0)
        return((char *)s + ft_strlen(s));
    while(s[i])
    {
        i++;
    }
    while(i >= 0)
    { 
        if(s[i] == (char)c)
        {
            return ((char *)s + i);
        }
        i--;
    }
    return(0);
}


#include <stdio.h>

char *strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            return (s + i);
        }
        i++;
    }
    return(NULL);
}
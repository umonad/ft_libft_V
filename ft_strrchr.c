#include <stdio.h>

char *strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i])
    {
        i++;
    }

    //while((s + i) != s)
    while(i >= 0)
    {
        if(s[i] == c)
        {
            return (s + i);
        }
        i--;
    }
    return(NULL);
}


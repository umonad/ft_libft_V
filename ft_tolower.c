#include <stdio.h>

int tolower(int c)
{
    if(c >= 97 && c <= 122)
        c = c - 32;
    return(c);
}
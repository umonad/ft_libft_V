#include "libft.h"

int    main()
{
    char *s1;
    char *s2;
    int n;

    s1 = "abc";
    s2 = "ghn";
    n = ft_strncmp(s1, s2, 2);
    printf ("n = %d", n);
    return(0);
}
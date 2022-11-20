#include "libft.h"

char	*ft_strdup(const char *s)
{
    char    *str;
    int     i;

    i = 0;
	if(s == 0)
		return(NULL);
    str = malloc(ft_strlen(s) + 1 * sizeof(char));
    if (!str)
        return (NULL);
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = 0;
    return (str);
}

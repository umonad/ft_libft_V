#include "libft.h"

int main()
{
    int a = '2';
    char *str = "absde";

    char src[] = "tesuhu";
    char dst[] = "hulkklk";

    printf("%s\n", dst);
    ft_strlcpy(dst, src, 2);
    printf("%s\n", dst);
    printf("%d\n", ft_strlcpy(dst, src, 2));
    if (ft_isdigit(a)==0)
        printf("Character is number\n");
    if (ft_isalpha(a)== 0)
        printf("Character is alpha\n");
    if (ft_isalnum(a)==0)
        printf("character is alphanum\n");
    if (ft_isascii(a)==0)
        printf("Character is ascii\n");
    else
        printf("autre comb\n");
    if (ft_strlen(str)==5)
        printf("okstrlen\n");
    return(0);
}

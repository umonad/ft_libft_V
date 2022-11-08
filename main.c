#include "libft.h"

int main()
{
    char a = '5';

    if (ft_isdigit(a)==0)
        printf("Character is number\n");
    if (ft_isalpha(a)== 0)
        printf("Character is alpha\n");
    if (ft_isalnum(a)==0)
        printf("character is alphanum\n");
    else
        printf("autre comb");
}
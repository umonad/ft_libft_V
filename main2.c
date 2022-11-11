
#include "libft.h"
int main ()
{
    char dest[] = "Aticleworld";
    const char src[]  = "Amlendra";
    char dest2[] = "Aticleworld";
    const char src2[]  = "Amlendra";
    //Source and destination before memmove
    printf("Before >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 5);
    memmove(dest2, src2, 5);
    //Source and destination after memmove
    printf("Mon ft_memmove >> dest = %s, src = %s\n\n", dest, src);
    printf("Vrai memmove >> dest = %s, src = %s\n\n", dest2, src2);
    return 0;
}
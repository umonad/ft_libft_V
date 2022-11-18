#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int num;

    sign = 1;
    num = 0;
    i = 0;
	while((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			sign *= -1;
		i++;
	}
    while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return(num * sign);
}

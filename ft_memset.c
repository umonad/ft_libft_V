/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:58:45 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/20 17:02:30 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *strtmp;
    strtmp = (unsigned char *) str;
    int i;

	i = 0;
    if(n == 0)
        return(NULL);
    while(n > 0)
    {
        strtmp[i] = c;
        i++;
        n--;
    }
    return((void *) strtmp);
}

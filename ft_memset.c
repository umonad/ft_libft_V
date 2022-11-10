/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:58:45 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/10 23:10:21 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memset(void *str, int c, size_t n)
{
    unsigned char *strtp;
    if(n == 0)
        return(NULL);
    while(n > 0)
    {
        strtp = (unsigned char*)str;
        *strtp = c;
        strtp++;
        n--;
    }
    return((unsigned char *)str);
}

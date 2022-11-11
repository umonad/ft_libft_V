/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:58:45 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/11 23:56:58 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memset(void *str, int c, size_t n)
{
    unsigned char *strtmp;
    strtmp = (unsigned char *) str;
    
    if(n == 0)
        return(NULL);
    while(n > 0)
    {
        *strtmp = c;
        strtmp++;
        n--;
    }
    return((void *) str);
}

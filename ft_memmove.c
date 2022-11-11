/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:25:34 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/11 23:04:40 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char    *d;
    unsigned char    *s;
    
    s = (unsigned char*) src;
    d = (unsigned char*) dest;
    
    if(d < s)
    {
        while(n-- > 0)
        {
            *d = *s;
            d++;
            s++;
        }
        while(n-- > 0)
            d[n] = s[n];
            
    }
    return(dest);
}
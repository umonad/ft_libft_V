/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:32:15 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/14 21:14:07 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char c2;
    size_t i;

    ptr = (unsigned char *)s;
    c2 = (unsigned char) c;
    i = 0;
    if(n == 0)
        return(NULL);
    while(ptr[i] != c2 && n > 0)
    {
        i++;
        n--;
    }
    if(ptr[i] == c2)
        return ((void *)ptr + i); 
    return (NULL);
}


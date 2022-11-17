/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:32:15 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/17 17:26:54 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if(n == 0)
        return(NULL);
    while(n > 0)
    {
		if(((char *)s)[i] == (char)c)
        	return ((void *)s + i);
        i++;
        n--;
    }
    
    return (NULL);
}


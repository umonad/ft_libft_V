/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:32:15 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/13 18:13:23 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned long int i;

    ptr = (unsigned char *)s;
    while(i < n)
    {
        if(ptr[i] == (unsigned char)c)
        {
            return (&ptr[i]);
        }   
        i++;
    }
    return (NULL);
}

    


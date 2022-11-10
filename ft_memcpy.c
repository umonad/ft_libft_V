/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:49:14 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/10 23:15:28 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n)

{
    unsigned char *d;
    unsigned char *s;
    
    while(n > 0 && *s != '\0')
    {
        d = (unsigned char*)dest;
        s = (unsigned char*)src;
        *d = *s;
        d++;
        s++;
        n--;
    }
    return((unsigned char*)dest);
}

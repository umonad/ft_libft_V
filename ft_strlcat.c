/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:09:48 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/10 15:53:24 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlcat(char *dst, char*src, size_t limit)
{
    int i = 0;
    int j = 0;
    
    if(limit != 0)
    {
        while(dst[i] && limit > 0)
            i++;
        if(dst[i] != '\0')
            return(limit + i);
        while(src[j] && limit - 1 > 0)
        {
            dst[i+j] = src[j];
            j++;
        }
        dst[i+j] = '\0';
        return(i+j);
    }
    return(0);
}
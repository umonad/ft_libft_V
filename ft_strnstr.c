/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:42:35 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/17 17:40:19 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if(big == 0 || little == NULL)
        return((char*) big);
    if (little[0] == 0)
        return((char*) big);
    while(big[i])
    {
        j = 0;
        while(big[i + j] == little[j] && i + j < len)
        {
            j++;
            if(little[j] == '\0')
                return((char *)big + i);
        }
        i++;
    }
    return(NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:28:54 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/17 18:37:17 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char    *str;
    
	int     i;
	int		j;
	
    i = 0;
    
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s1[i] )
    {
        str[i] = s1[i];
        i++;
    }
	j = 0;
	while (s2[i])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
    str[i] = 0;
    return (str);
	
}
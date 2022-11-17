/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:06:52 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/17 16:58:53 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int smax(char const *s, size_t len)
{
	size_t i;
	
	i = 0;
	while(i < len && s[i])
	{
		i++;
	}
	return(i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t j;
	
	j = 0;

	char *st;
	
	if(start > ft_strlen(s))
	{
		st = malloc(sizeof(char) * 1); 
		if (!st)
			return (NULL);
		*st = '\0';
		return(st);
	}
	st = malloc(sizeof(char) * (smax(s, len) + 1));
	if (!st)
	    return (NULL);
	while(s[start] && j < len) 
	{
		st[j] = s[start];	
		j++;
		start++;
	}
	st[j] = '\0';
	return(st);
}
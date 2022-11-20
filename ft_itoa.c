/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:56:11 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/19 21:30:12 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int len10(int n)
{
	int i;

	i = 0;
	if(n < 0)
	{
		i++;
		n = n * -1;
	}
	while(n > 0)
	{
		n = n / 10;
		i++;
	}
	return(i);
}

char *ft_itoa(int n)
{
	char *s;
	int stop;
	int len;

	stop = 0;
	len = len10(n);
	if(n == -2147483648)
		return(ft_strdup("-2147483648"));
	if(n == 0)
		return(ft_strdup("0"));
	s = ft_calloc(sizeof(char) , len10(n) + 1);
	if(!s)
		return(NULL);
	if(n < 0)
	{
		stop++;
		n*= -1;
		s[0] = '-';
	}
	s[len] = '\0';
	while(len-- > stop)
	{
		s[len] = (n % 10) + '0';
		n = n / 10;
	}
	return(s);
}
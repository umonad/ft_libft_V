/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:04:10 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/15 20:05:47 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	
	if((long int)nmemb < 0 || (long int)size < 0)
		return(NULL);
	pointer = malloc(nmemb * size);
	if (!pointer)
		return(NULL);
	ft_bzero(pointer, nmemb * size);
	return(pointer);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:04:10 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/20 17:45:52 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	
	if((long int)nmemb < 0 || (long int)size < 0)
		return(malloc(0));
	pointer = malloc(nmemb * size);
	if (!pointer)
		return(malloc(0));
	ft_bzero(pointer, nmemb * size);
	return(pointer);
}
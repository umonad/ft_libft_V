/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:24:29 by mudoh             #+#    #+#             */
/*   Updated: 2022/11/11 18:18:36 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

int     ft_strlen(char *str);
int     ft_isprint(int a);
int     ft_isascii(int a);
int     ft_isdigit(int a);
int     ft_isalnum(int a);
int     ft_isalpha(int a);
int     ft_strlcpy(char *str, char *dst, size_t t);
int     ft_strlcat(char *dst, char*src, size_t limit);
void    bzero(void *s, size_t n);
void    *memset(void *str, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
#endif


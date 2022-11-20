/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:32:06 by tbae              #+#    #+#             */
/*   Updated: 2022/11/20 17:15:24 by mudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i] != '\0'
			&& (str[i + 1] == c || str[i] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char *from, char c)
{
	int	i;

	i = 0;
	while (from[i] != c && from[i] != '\0')
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, char *str, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c && str[i + j] != '\0')
				j++;
			split[word] = malloc(sizeof(char) * (j + 1));
			if (!split[word])
				return (0);
			write_word(split[word], str + i, c);
			i = i + j;
			word++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
	{
		return(malloc(0));
	}
	words = count_words((char *)s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if(!res)
		return(NULL);
	res[words] = 0;
	if (write_split(res, (char *)s, c) == 1)
		return (res);
	else
	{
		free (res);
		return(malloc(0));
	}
}

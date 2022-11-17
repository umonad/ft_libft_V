/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbae <tbae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:32:06 by tbae              #+#    #+#             */
/*   Updated: 2022/11/17 10:01:59 by tbae             ###   ########.fr       */
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

static void	write_split(char **split, char *str, char c)
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
			write_word(split[word], str + i, c);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	words = count_words((char *)s, c);
	res = malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	write_split(res, (char *)s, c);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:31:21 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/17 15:33:32 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_string_free(char	**split, size_t w)
{
	while (w >= 0)
	{
		free(split[w]);
		split[w] = NULL;
		w--;
	}
	free(split);
	split = NULL;
}

static size_t	ft_word_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != '\0' && str[i] != c)
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	w;

	w = 0;
	while (*s != c && *s != '\0')
	{
		w++;
		s++;
	}
	return (w);
}

static char	**ft_fill_str(char const *s, char c,
							size_t count_word, char **split)
{
	size_t	i;

	i = 0;
	while (*s != '\0' && count_word > i)
	{
		while (*s != '\0' && *s == c)
			s++;
		split[i] = ft_substr(s, 0, ft_word_len(s, c));
		if (split[i] == NULL)
		{
			ft_string_free(split, i);
			return (NULL);
		}
		s = s + ft_word_len(s, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**split;

	if (s == NULL)
		return (NULL);
	word_count = ft_word_count(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (split == NULL)
		return (NULL);
	ft_fill_str(s, c, word_count, split);
	return (split);
}

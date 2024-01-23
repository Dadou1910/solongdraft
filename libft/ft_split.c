/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:41:26 by abremont          #+#    #+#             */
/*   Updated: 2023/12/06 15:51:11 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	fill_tab(char *new_str, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
}

static int	mem_fill(char **final_tab, const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	index;

	i = 0;
	index = 0;
	while (s[index])
	{
		count = 0;
		while (s[index + count] && s[index + count] != c)
			count++;
		if (count > 0)
		{
			final_tab[i] = malloc((count + 1) * sizeof(char));
			if (!final_tab[i])
				return (-1);
			fill_tab(final_tab[i], (s + index), c);
			i++;
			index += count;
		}
		else
			index++;
	}
	final_tab[i] = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (0);
	if (mem_fill(tab, s, c) == -1)
	{
		while (*tab)
			free(*tab++);
		return (free(tab), NULL);
	}
	return (tab);
}
/*
int	main(void)
{
	int	j;
	char	str[] = "qwerty/qwert/qwertyu/qwertty/";
	char	c = '/';
	char	**split = ft_split(str, c);


	j = 0;
	while (split[j])
	{
		printf("%s\n", split[j]);
		j++;
	}
	j = 0;
	while (split[j])
	{
		free(split[j]);
		j++;
	}
	free(split);
}*/

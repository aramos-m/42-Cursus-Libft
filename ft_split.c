/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:15:58 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/21 21:40:09 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_divide(char const *s, char rule, int *k)
{
	int		i;
	int		j;
	char	*split;

	i = *k;
	j = 0;
	while (s[i] && s[i] != rule)
		i++;
	split = ft_calloc(sizeof(char), (i - *k + 1));
	i = *k;
	if (split == NULL)
		return (NULL);
	while (s[i] != rule && s[i] != '\0')
	{
		split[j] = s[i];
		j++;
		i++;
	}
	*k = i;
	split[j] = '\0';
	return (split);
}

int	count_word(char const *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	while (s[i])
	{
		word ++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (word);
}

static void	ft_free_result(char **result, int i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	i = count_word(s, c);
	result = ft_calloc(sizeof(char *), (i + 1));
	i = 0;
	if (result == NULL)
		return (NULL);
	while (s[j])
	{
		if (s[j] != c)
		{
			result[i] = ft_divide(s, c, &j);
			if (!result[i++])
				return (ft_free_result(result, i), NULL);
		}
		else
			j++;
	}
	result[i] = NULL;
	return (result);
}

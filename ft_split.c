/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:15:58 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/19 21:09:44 by aramos-m         ###   ########.fr       */
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
	int		word;

	i = 0;
	j = 0;
	word = count_word(s, c);
	result = ft_calloc(sizeof(char *), (word + 1));
	if (result == NULL)
		return (NULL);
	while (s[j])
	{
		if (s[j] != c)
		{
			result[i] = ft_divide(s, c, &j);
			if (!result[i++])
			{
				ft_free_result(result, i);
				return (NULL);
			}
		}
		else
			j++;
	}
	result[i] = NULL;
	return (result);
}
/*int main(void)
{
    char const s[] = "Hola/Ana,///¿qué tal?";;
    char **split;
    char rule = 'i'; 

    split = ft_split(s, rule);

	int	i = 0;
	while (split[i])
    {
        printf("Fila %d: %s\n", i + 1, split[i]);
        free(split[i]); // Liberar memoria de cada fila
		i++;
    }
    free(split); // Liberar memoria del array de punteros
    return 0;
}*/

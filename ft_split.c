/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:15:58 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/19 18:58:10 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char *ft_divide(char const *s, char rule, int *k)
{
    int i = *k;
    int j = 0;
    char *split;

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

	while(s[i] && s[i] == c)
	{
		i++;
	}
	while(s[i])
	{
		word ++;
		while(s[i] && s[i] != c)
			i++;
		while(s[i] && s[i] == c)
			i++;
	}
	return(word);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int word;

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
            if (result[i] == NULL)
            {
                while (i > 0)
                {
                    i--;
                    free(result[i]);
                }
                free(result);
                return (NULL);
            }
            i++;
        }
        else
            j++;
    }
    result[i] = NULL; // Marcar el final del array de punteros
    return (result);
}
/*
int main(void)
{
    char const s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
    char **split;
    char rule = 'i'; 

	printf("------\n");
    split = ft_split(s, rule);

    // Imprimir las filas resultantes
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:38:55 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/02 21:29:45 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
        char    *sset;
        int     i;

        sset = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
        if (sset == NULL)
                return (NULL);
        if (!s1[0] || !set[0])
                return (NULL);
        i = 0;
        while (s1[i] && ft_strchr(set, s1[i]))
                        i++;
        s1 = s1 + i;
        i = ft_strlen(s1);
        while (i && ft_strchr(set, s1[i]))
                i--;
        sset = ft_substr(s1, 0, i+1);
        return(sset);
}

/*#include <stdio.h>
int main()
{
        const char      *s1 = "\tHola, mundo!\n\t";
        const char      *set = "\t\n";
        printf("%s\n", ft_strtrim(s1, set));
        return 0;
}*/

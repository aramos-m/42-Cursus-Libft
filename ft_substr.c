/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:31:33 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/23 21:48:50 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		str = ft_calloc(sizeof(char), 1);
		if (!str)
			return (NULL);
	}
	else
	{
		if (len > (size_t)ft_strlen(s + start))
			len = (unsigned int)ft_strlen(s + start);
		str = ft_calloc(sizeof(char), len + 1);
		if (!str)
			return (NULL);
		ft_memmove(str, s + start, len);
	}
	return (str);
}
/*int	main(void)
{
	char const		*s = "Hola, ¿que tal?";
	unsigned int	start;
	size_t			len;

	start = 20;
	len = 5;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/

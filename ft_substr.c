/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:31:33 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/21 21:36:49 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
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

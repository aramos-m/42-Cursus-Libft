/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:38:43 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/21 21:13:19 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dest;
	size_t	total;

	i = 0;
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	total = l_src + l_dest;
	if (l_dest >= size)
	{
		return (size + l_src);
	}
	if (l_dest < size)
	{
		while (src[i] != '\0' && l_dest + i < size - 1)
		{
			dest[l_dest + i] = src[i];
			i++;
		}
		dest[l_dest + i] = '\0';
	}
	return (total);
}

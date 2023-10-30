/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:20:01 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/30 22:10:29 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while ((i < dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dest;
	size_t	total;

	i = 0;
	l_src = strlen(src);
	l_dest = strlen(dest);
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
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*scat;

	scat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (scat == NULL)
		return (NULL);
	ft_strlcpy(scat, s1, (size_t)ft_strlen(s1) + 1);
	ft_strlcat(scat, s2, ft_strlen (s1) + ft_strlen(s2) + 1);
	return (scat);
}

/*int	main(void)
{
	char const	*s1 = "lorem ipsum";
	char const	*s2 = "dolor sit amet";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/

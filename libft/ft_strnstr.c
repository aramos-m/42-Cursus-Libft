/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:19:07 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/22 18:40:27 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	if (haystack[i] == '\0' || len == 0)
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			while ((haystack[i + j] == needle[j] && ((i + j) < len)))
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
					j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*haystack = "Hola, ¿que tal?";
	const char	*needle = "que";
	int			len = 8;

	printf("Actual: %s\n", strnstr(haystack, needle, len));
	printf("Expected: %s\n", ft_strnstr(haystack, needle, len));

	return (0);
}*/
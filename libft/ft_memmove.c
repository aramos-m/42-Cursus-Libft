/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:52:52 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/12 15:04:12 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char const		*auxsrc;
	char			*auxdst;

	auxsrc = src;
	auxdst = dst;
	if (dst > src)
	{
		i = len;
		while (i--)
			auxdst[i] = auxsrc[i];
	}
	else if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			auxdst[i] = auxsrc[i];
			i++;
		}
	}
	return (dst);
}

/*int	main()
{
	char	str1[] = "Ana, Ana";
	char	str2[] = "Hello, World!";
	int		n = 5;

	printf("Original function: %s\n", memmove(str1, str2, n));
	printf("Created function: %s\n", ft_memmove(str1, str2, n));
	return (0);
}*/

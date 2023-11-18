/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:52:52 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/22 21:05:15 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*auxdest;
	char const	*auxsrc;
	
	auxdest = dest;
	auxsrc = src;
	if (dest > src)
	{
		i = n;
		while (i--)
			auxdest[i] = auxsrc[i];
	}
	else if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			auxdest[i] = auxsrc[i];
			i++;
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[] = "Hola Ana";
	char	src[] = "123456789";
	int	n = 4;

	printf("Actual: %s\n", ft_memmove(dest, src, n));
	printf("Expected: %s\n", memmove(dest, src, n));
	return (0);
}*/

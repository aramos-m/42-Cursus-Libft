/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:57:33 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/16 21:28:40 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*auxsrc;
	char		*auxdest;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	auxsrc = src;
	auxdest = dest;
	while (i < n)
	{
		auxdest[i] = auxsrc[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = "123456789";
	char	dest[] = "Hola Ana";
	int	n = 4;

	printf("Actual: %s\n", ft_memcpy(dest, src, n));
	printf("Expected: %s", memcpy(dest, src, n));
	return (0);
}*/

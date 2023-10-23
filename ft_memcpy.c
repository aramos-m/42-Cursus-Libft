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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	const char		*auxsrc;
	char			*auxdst;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	auxsrc = src;
	auxdst = dst;
	while (i < n)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = "Hola, mundo!";
	char	dst[] = "123456789";
	int		n = 3;

	printf("%s\n", memcpy(src, dst, n));
	printf("%s\n", ft_memcpy(src, dst, n));
	return (0);
}*/

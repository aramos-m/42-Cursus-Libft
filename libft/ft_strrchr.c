/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:29:29 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/17 21:14:47 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) s + i);
		i--;
	}
	if (s[i] == (unsigned char) c)
		return ((char *) s + i);
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Hello, World!";
	int		c = 'e';

	printf("Original function: %s\n", strrchr(str, c));
	printf("Created function: %s\n", ft_strrchr(str, c));
	return (0);
}*/

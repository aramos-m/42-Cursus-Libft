/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:57:17 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/17 21:08:18 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (unsigned char) c)
		i++;
	if (s[i] == (unsigned char) c)
		return ((char *) s + i);
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello, World!";
	int		c = 'I';

	printf("Original function: %s\n", strchr(str, c));
	printf("Created function: %s\n", ft_strchr(str, c));
	return (0);
}*/

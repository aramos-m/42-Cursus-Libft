/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:59:21 by aramos-m          #+#    #+#             */
/*   Updated: 2023/09/21 20:31:04 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long int len)
{
	unsigned int	i;
	char			*aux;

	aux = b;
	i = 0;
	while (i < len)
	{
		aux[i] = c;
		i++;
	}
	return (b);
}
/*#include <string.h>
#include <stdio.h>
int	main	()
{
	char	dest[4] = "Hola";
	char	*str;
	unsigned long int len = 2;
	int c = 'A';
	printf("Original function:%s\n", memset(dest, c, len));
	printf("Created fuction:%s\n", ft_memset(dest, c, len));
}*/

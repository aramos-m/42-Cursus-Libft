/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:18:49 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/22 21:03:14 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main()
{
	char c;

	c = '0';
	printf("Original function: %d\n", ft_isdigit(c));
	printf("Created function: %d\n", isdigit(c));
}*/

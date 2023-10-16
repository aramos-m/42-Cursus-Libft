/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:23:33 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/16 20:50:26 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>
#include <ctype.h>
int	main()
{
	int	c = 'A';

	printf("Original function: %d\n", tolower(c));
	printf("Created function: %d\n", ft_tolower(c));
	return (0);
}*/

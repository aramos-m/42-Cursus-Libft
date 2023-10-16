/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:48:17 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/16 20:16:11 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int	main()
{
	int c = 'a';
	printf("Original function: %d\n", toupper(c));
	printf("Created function: %d\n", ft_toupper(c));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:39:50 by aramos-m          #+#    #+#             */
/*   Updated: 2023/09/12 20:31:40 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main ()
{
	char c;
	c = '+';
	printf("Original function: %d\n", ft_isalpha(c));
	printf("Created function: %d\n", isalpha(c));
}*/

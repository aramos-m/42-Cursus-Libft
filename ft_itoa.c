/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:22:54 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/21 21:45:13 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_convert(int n, char *nbr, int i)
{
	nbr[i] = '\0';
	while (n != 0)
	{
		if (nbr[i] != '-')
		{
			nbr[i - 1] = (n % 10) + '0';
			n /= 10;
		}
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;

	i = ft_nbrlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	if (nbr == NULL)
		return (NULL);
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	ft_convert(n, nbr, i);
	return (nbr);
}

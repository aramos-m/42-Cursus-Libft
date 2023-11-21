/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:20:01 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/21 21:38:23 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*scat;

	scat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (scat == NULL)
		return (NULL);
	ft_strlcpy(scat, s1, (size_t)ft_strlen(s1) + 1);
	ft_strlcat(scat, s2, ft_strlen (s1) + ft_strlen(s2) + 1);
	return (scat);
}

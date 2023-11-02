/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:20:01 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/02 20:34:58 by aramos-m         ###   ########.fr       */
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

/*int	main(void)
{
	char const	*s1 = "lorem ipsum";
	char const	*s2 = "dolor sit amet";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:38:55 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/02 21:29:45 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sset;
	int		i;
	int		j;

	sset = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (sset == NULL)
		return (NULL);
	i = strchr(s1, set[0]);
	if (i != 0)
	{
		while(

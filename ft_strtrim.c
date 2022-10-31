/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:15:58 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/28 09:48:03 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_car_spe(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	lens;
	char	*c;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
	{
		c = ft_strdup(s1);
		return (c);
	}
	lens = ft_strlen(set);
	len = ft_strlen(s1);
	while (ft_car_spe(s1[i], set))
		i++;
	while (len && ft_car_spe(s1[--len], set))
		;
	c = ft_substr(s1, i, (len - i + 1));
	return (c);
}

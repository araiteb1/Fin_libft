/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:56:14 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/23 16:23:25 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*h;
	unsigned char	*b;

	i = 0;
	h = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n)
	{
		if (h[i] != b[i])
			return (h[i] - b[i]);
		i++;
	}
	return (0);
}

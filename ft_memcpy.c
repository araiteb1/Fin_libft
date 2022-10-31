/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:30:13 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/28 09:35:42 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dst || src)
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		i = 0;
		if (d == s || n == 0)
			return (d);
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
	return (NULL);
}

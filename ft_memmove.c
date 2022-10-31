/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:56:52 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/24 11:35:15 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s || d)
	{
		if (len == 0)
			return (d);
		if (d <= s)
			ft_memcpy(d, s, len);
		else
		{
			while (len != 0)
			{
				len--;
				d[len] = s[len];
			}
		}
		return (d);
	}
	return (NULL);
}

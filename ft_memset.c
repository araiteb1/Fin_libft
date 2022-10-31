/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:54:26 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/30 20:22:54 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dr;

	dr = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		while (i < len)
		{
			dr[i] = c;
			i++;
		}
		len--;
	}
	return (b);
}

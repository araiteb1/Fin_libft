/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:58:15 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/23 16:26:02 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	i = 0;
	dst = (unsigned char *)s1;
	sr = (unsigned char *)s2;
	while (((dst[i] != '\0') || (sr[i] != '\0')) && i < n)
	{
		if (dst[i] < sr[i])
			return (-1);
		else if (dst[i] > sr[i])
			return (1);
		i++;
	}
	return (0);
}

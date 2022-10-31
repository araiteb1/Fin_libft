/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:15:21 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/31 20:28:59 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (NULL);
	l2 = ft_strlen(s2);
	l1 = ft_strlen(s1);
	new = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_memcpy(new, s1, l1);
	ft_memcpy((new + l1), s2, l2);
	new[l1 + l2] = '\0';
	return (new);
}

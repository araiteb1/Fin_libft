/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:16:07 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/23 14:33:26 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens || len == 0)
		return (ft_calloc(1, sizeof(char)));
	if ((start + len) >= lens)
	{
		new = (char *)malloc(((lens - start) + 1) * sizeof(char));
		if (!new)
			return (0);
		ft_memcpy(new, (s + start), lens - start + 1);
		new[lens - start] = '\0';
		return (new);
	}
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_memcpy(new, (s + start), len);
	new[len] = '\0';
	return (new);
}

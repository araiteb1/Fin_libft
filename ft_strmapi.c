/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:15:39 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/23 16:25:50 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*s1;

	if (!s || !f)
		return (0);
	i = 0;
	len = ft_strlen(s);
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (0);
	while (*s)
	{
		s1[i] = f(i, *s);
		s++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

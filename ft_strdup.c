/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:59:18 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/23 16:25:02 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	tp = (char *)malloc((len + 1) * sizeof(char));
	if (!tp)
		return (NULL);
	while (*s)
		tp[i++] = *s++;
	tp[i] = '\0';
	return (tp);
}

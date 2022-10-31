/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:43:56 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/24 09:36:48 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max_long(const char *str, long rev, int i, int sin)
{
	long	nb;

	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rev = nb;
		nb = (nb * 10) + str[i] - 48;
		if ((nb / 10) != rev)
		{
			if (sin == -1)
				return (0);
			return (-1);
		}
		i++;
	}
	return (nb * sin);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		sin;

	i = 0;
	sin = 1;
	nb = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sin *= -1;
		i++;
	}
	return (ft_max_long(str, nb, i, sin));
}

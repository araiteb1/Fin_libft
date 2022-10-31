/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:44:17 by araiteb           #+#    #+#             */
/*   Updated: 2022/10/23 16:23:08 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	if (!lst)
		return (0);
	cont = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cont++;
	}
	return (cont);
}

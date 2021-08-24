/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:22:44 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/23 17:22:57 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	i = -1;
	max -= min;
	tab = malloc(sizeof(int) * max);
	while (++i < max)
	{
		tab[i] = min;
		min++;
	}
	return (tab);
}

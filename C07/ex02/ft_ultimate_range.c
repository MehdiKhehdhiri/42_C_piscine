/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:23:29 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/23 17:23:43 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	i = -1;
	max -= min;
	tab = malloc(sizeof(int) * max);
	if (!tab)
		return (-1);
	while (++i < max)
	{
		tab[i] = min;
		min++;
	}
	*range = tab;
	return (max);
}

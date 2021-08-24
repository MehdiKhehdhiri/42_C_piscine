/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:19:50 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/06 14:28:09 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	resultat[255];
	char	c;
	char	p;
	int		len;
	char	n;

	len =0;

	if (nb < 0)
	{
		n = '-';
		nb = -nb;
		write (1, &n, 1);
	}
	while (nb != 0)
	{
		len++;
		c = '0' + nb % 10;
		nb = nb / 10;
		resultat[len] = c;
	}
	while (len >= 0)
	{
		p = resultat[len];
		write (1, &p, 1);
		len--;
	}
}

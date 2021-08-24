/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:41:03 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/05 16:21:55 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	numero1;
	int	numero2;

	numero1 = -1 ;
	numero2 = 0;
	while (++numero1 <= 99 )
	{
		numero2 = numero1;
		while (++numero2 <= 99)
		{
			ft_putchar('0' + numero1 / 10);
			ft_putchar('0' + numero1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + numero2 / 10);
			ft_putchar('0' + numero2 % 10);
			if (!(numero1 == 98 && numero2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

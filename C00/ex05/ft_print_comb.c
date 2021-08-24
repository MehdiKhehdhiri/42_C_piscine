/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:08:08 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/05 13:57:36 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0' - 1;
	while (++num[0] <= '7' )
	{
		num[1] = num[0];
		while (++num[1] <= '8')
		{
			num[2] = num[1];
			while (++num[2] <= '9')
			{
				if (num[0] != num[1] != num[2])
				{
					ft_putchar(num[0]);
					ft_putchar(num[1]);
					ft_putchar(num[2]);
					if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}	
			}
		}
	}
}

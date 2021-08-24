/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:37:39 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/07 12:55:02 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int c)
{
	int	count;

	count = -1;
	ft_putchar('A');
	while (++count < c - 2)
		ft_putchar('B');
	if (c > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	middle_row(c, l)
{
	int	a;

	l -= 1;
	while (--l > 0)
	{
		a = c - 2;
		ft_putchar('B');
		while (a >= 1)
		{
			ft_putchar(' ');
			a -= 1;
		}
		if (c > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}		
}

void	last_row(int c)
{
	int	i;

	i = 1;
	while (i <= c)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i != c)
			ft_putchar('B');
		else
			ft_putchar('C');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_row(x);
		if (y > 1)
		{
			if (y > 2)
				middle_row(x, y);
			last_row(x);
		}
	}
}

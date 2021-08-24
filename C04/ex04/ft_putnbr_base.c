/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:20:28 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/13 14:45:50 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r')
		return (1);
	if (c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	base_errors(char *base)
{
	int	i;
	int	j;

	if (!base || base[1] == '\0')
	{
		return (1);
	}
	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == base[j] && i != j)
			return (1);
		if (base[i] == '+' || base[i] == '-' || isspace(base[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	nb;

	nb = nbr;
	l = ft_strlen(base);
	if (base_errors(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < l)
	{
		ft_putchar(base[nb % l]);
	}
	if (nb >= l)
	{
		ft_putnbr_base(nb / l, base);
		ft_putchar(base[nb % l]);
	}
}

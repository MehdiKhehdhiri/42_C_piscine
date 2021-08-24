/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_row.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:14:05 by mriant            #+#    #+#             */
/*   Updated: 2021/08/15 21:46:35 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	view_lr(int k, int position, int grille[4][4])
{
	int	i;
	int	count;
	int	max;
	int	x;
	int	y;

	y = position / 4;
	x = position % 4;
	i = 1;
	count = 1;
	max = grille[y][0];
	while (i <= x)
	{
		if (grille[y][i] > max)
		{
			count++;
			max = grille[y][i];
		}
		i++;
	}
	if (k > max)
		count ++;
	return (count);
}

int	view_rr(int k, int position, int grille[4][4])
{
	int	i;
	int	count;
	int	max;
	int	x;
	int	y;

	y = position / 4;
	x = position % 4;
	i = x - 1;
	count = 1;
	max = k;
	while (i >= 0)
	{
		if (grille[y][i] > max)
		{
			count++;
			max = grille[y][i];
		}
		i--;
	}
	return (count);
}

int	verif_leftrow(int k, int position, int grille[4][4], int leftrow[4])
{
	int	y;
	int	x;
	int	count;

	count = view_lr(k, position, grille);
	y = position / 4;
	x = position % 4;
	if (x == 3 && count == leftrow[y])
	{
		return (1);
	}
	else if (x == 3 && count != leftrow[y])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	verif_rightrow(int k, int position, int grille[4][4], int rightrow[4])
{
	int	y;
	int	x;
	int	count;

	count = view_rr(k, position, grille);
	y = position / 4 ;
	x = position % 4;
	if (x == 3 && count == rightrow[y])
	{
		return (1);
	}
	else if (x == 3 && count != rightrow[y])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	verif_doubrow(int k, int position, int grille[4][4])
{
	int	y;
	int	x;

	x = 0;
	y = position / 4;
	while (x < 4)
	{
		if (grille[y][x] == k)
			return (0);
		else
			x++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:06:24 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/16 22:06:29 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_row(int board[10][10], int i)
{
	int j;

	j = 0;
	while ( j < 10)
	{
		if (board[i][j] == 1)
			return (0);
		j++;
	}
	return (1);
}

int	verif_col(int board[10][10], int j)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (board[i][j] == 1)
			return (0);
		i++;
	}
	return (1);
}

int verif_diagonal(int board[10][10], int i, int j)
{
	int a;
	int b;

	a = i - 1;
	b = j - 1;
	while ( a >= 0 && b >= 0)
	{
		if (board[a][b] == 1)
			return (0);
		a--;
		b--;
	}
	a = i + 1;
	b = j + 1;
	while (a < 10 && b < 10)
	{
		if (board[a][b] == 1)
			return (0);
		a++;
		b++;
	}
	a = i - 1;
	b = j + 1;
	while (a >= 0 && b < 10)
	{
		if (board[a][b] == 1)
			return (0);
		a--;
		b++;
	}
	a = i + 1;
	b = j - 1;
	while (a < 10 && b >= 0)
	{
		if (board[a][b] == 1)
			return (0);
		a++;
		b--;
	}
	return (1);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:12:21 by mriant            #+#    #+#             */
/*   Updated: 2021/08/15 19:20:29 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_upcol(int k, int position, int grille[4][4], int upcol[4]);
int	verif_downcol(int k, int position, int grille[4][4], int downcol[4]);
int	verif_doubcol(int k, int position, int grille[4][4]);
int	verif_leftrow(int k, int position, int grille[4][4], int leftrow[4]);
int	verif_rightrow(int k, int position, int grille[4][4], int rightrow[4]);
int	verif_doubrow(int k, int position, int grille[4][4]);

int	verif_col(int k, int position, int grille[4][4], int contrainte[4][4])
{
	if (verif_upcol(k, position, grille, contrainte[0])
		&& verif_downcol(k, position, grille, contrainte[1])
		&& verif_doubcol(k, position, grille))
		return (1);
	else
		return (0);
}

int	verif_lig(int k, int position, int grille[4][4], int contrainte[4][4])
{
	if (verif_leftrow(k, position, grille, contrainte[2])
		&& verif_rightrow(k, position, grille, contrainte[3])
		&& verif_doubrow(k, position, grille))
		return (1);
	else
		return (0);
}

int	remplissage(int grille[4][4], int position, int contrainte[4][4])
{
	int	x;
	int	y;
	int	k;

	if (position == 4 * 4)
		return (1);
	y = position / 4;
	x = position % 4;
	if (grille[y][x] != 0)
		return (remplissage(grille, position + 1, contrainte));
	k = 1;
	while (k < 5)
	{
		if (verif_col(k, position, grille, contrainte)
			&& verif_lig(k, position, grille, contrainte))
		{
			grille[y][x] = k;
			if (remplissage(grille, position + 1, contrainte))
				return (1);
		}
		k++;
	}
	grille[y][x] = 0;
	return (0);
}

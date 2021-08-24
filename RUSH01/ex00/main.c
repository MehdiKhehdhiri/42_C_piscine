/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:38:08 by mriant            #+#    #+#             */
/*   Updated: 2021/08/15 21:44:12 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		remplissage(int grille[4][4], int position, int contrainte[4][4]);
void	print_grid(int grille[4][4]);
void	init_g(int contrainte[4][4], int grille[4][4], char **argv);

// Contraintes : 0 = upcol, 1 = downcol, 2 = leftrow, 3 = righttow 

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkpara(int argc, char **argv)
{
	int	i;
	int	comptch;

	i = 0;
	comptch = 0;
	if (argc != 2 || ft_strlen(argv[1]) != 31)
		return (1);
	while (i < 31)
	{
		if ((argv[1][i] < '1' || argv[1][i] > '4') && argv[1][i] != ' ')
			return (1);
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			comptch++;
			if (argv[1][i - 1] >= '0' && argv[1][i - 1] <= '4')
				return (1);
		}
		i++;
	}
	if (comptch != 16)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	grille[4][4];
	int	contrainte[4][4];

	(void) argv;
	if (checkpara(argc, argv))
		write(1, "Error\n", 6);
	else
	{
		init_g(contrainte, grille, argv);
		remplissage(grille, 0, contrainte);
		if (grille[3][3] == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		print_grid(grille);
	}
	return (0);
}

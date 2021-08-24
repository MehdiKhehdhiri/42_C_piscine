/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:23:15 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/11 17:12:25 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		j = 1;
		if (*str == *to_find)
		{
			while (to_find[i] != '\0' && j == 1)
			{
				if (str[i] != to_find[i])
				{
					j = 0;
				}
				i++;
			}
			if (j == 1)
				return (str);
		}
		str++;
	}
	return (0);
}

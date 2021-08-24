/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:29 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/11 12:14:52 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src && i <= nb + 1)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}

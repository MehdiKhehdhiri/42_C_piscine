/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:06:58 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/10 14:29:41 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str != 0)
	{
		i += 1;
		str += 1;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
{
	int	destlen;
	int	i;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		if(i < size - 1)
		{	
			dest[destlen + i] = src[i];
			i++;
		}
	}
	dest[destlen + i] = '\0';
	return (dest);
}

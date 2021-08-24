/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:47:29 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/08/23 18:57:54 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	t;

	t = 0;
	i = ft_strlen(dest);
	while (src[t])
	{
		dest[i + t] = src[t];
		t++;
	}
	dest[i + t] = '\0';
	return (dest);
}

void	loop(char **strs, char *str, int size, char *sep)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (i == (size - 1))
			str = ft_strcat(str, strs[i]);
		else
		{
			str = ft_strcat(str, strs[i]);
			str = ft_strcat(str, sep);
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		size_m;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		return (str);
	}
	i = -1;
	size_m = 0;
	while (++i < size)
		size_m += ft_strlen(strs[i]) + ft_strlen(sep);
	size_m -= ft_strlen(sep);
	str = (char *)malloc(sizeof(char) * size_m);
	loop(strs, str, size, sep);
	return (str);
}
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}

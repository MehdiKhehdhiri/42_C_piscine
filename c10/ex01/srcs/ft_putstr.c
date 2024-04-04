#include "../includes/ft.h"

void	ft_putstr(char *str, int out)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i), out);
		i++;
	}
}

void	ft_putstr_buf(char *str, int size)
{
	int i;

	i = -1;
	while (++i < size)
		ft_putchar(str[i], 1);
}

#include "../includes/ft.h"

void	ft_putchar(unsigned char c, int out)
{
	write(out, &c, 1);
}

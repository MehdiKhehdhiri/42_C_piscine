#include "../includes/ft.h"

void	no_args(void)
{
	char	buf;

	while (read(1, &buf, 1) != 0)
		;
}

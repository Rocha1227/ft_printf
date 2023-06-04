#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (!c)
		return (0);
	
	while(c[i])
	{
		write(1, &c, 1);
	}
}
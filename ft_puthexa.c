#include "ft_printf.h"

int	ft_put_hexa_lower(unsigned int n)
{
	char *base16;

	base16 = "0123456789abcdef";
	ft_putchar(base16[n]);
}
int	ft_put_hexa_upper(unsigned int n)
{
	char *base16;

	base16 = "0123456789ABCDEF";
	ft_putchar(base16[n]);
}
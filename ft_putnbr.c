#include "ft_printf.h"

int	ft_putnbr (int n)
{
	long long int nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar("-");
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}

int	ft_putnbr_uns (int n)
{
	unsigned int nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar("-");
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}
#include "ft_printf.h"

void	ft_putchar(int nb)
{
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
	ft_putnbr		ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}
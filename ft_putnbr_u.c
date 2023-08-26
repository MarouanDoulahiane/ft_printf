#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb)
{

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

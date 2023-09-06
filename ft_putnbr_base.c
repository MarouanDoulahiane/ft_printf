#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char xX)
{
	char			*base;
	unsigned int	base_len;

	base_len = 16;
	if (xX == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, xX);
		ft_putnbr_base(nb % base_len, xX);
	}
	else
		ft_putchar(base[nb]);
}

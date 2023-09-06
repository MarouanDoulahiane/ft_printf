#include "ft_printf.h"

void	ft_putnbr_base_addr(unsigned long nb)
{
	char			*base;
	unsigned long	base_len;

	base_len = 16;
	base = "0123456789abcdef";
	if (nb >= base_len)
	{
		ft_putnbr_base_addr(nb / base_len);
		ft_putnbr_base_addr(nb % base_len);
	}
	else
		ft_putchar(base[nb]);
}

void	ft_putaddr(void *ptr)
{
	unsigned long addr = (unsigned long)ptr;
	
	ft_putstr("0x");
	ft_putnbr_base_addr(addr);
}

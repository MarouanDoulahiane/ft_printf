#include "ft_printf.h"

void	flag_checker(va_list args,const char format)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'x' || format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), format);
	else if (format == 'p')
		ft_putaddr(va_arg(args, void *));
	else if (format == '%')
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			flag_checker(args, *format);
		}
		else
			ft_putchar(*format);
		format++;
	}
	return 0;
}

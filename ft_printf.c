/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:38:13 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 15:38:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_helper(va_list args, const char *format, int *len)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*format == 'c')
		ft_putstr(va_arg(args, char *), len);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*format == 'u')
		ft_putunsigned(va_arg(args, unsigned int), len);
	else if (*format == '%')
		ft_putchar('%', len);
	else if (*format == 'x' || *format == 'X')
		ft_puthex(va_arg(args, unsigned int), *format, len);
	else if (*format == 'p')
		ft_putaddress(va_arg(args, void *), len);
	format++;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			print_helper(args, format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}

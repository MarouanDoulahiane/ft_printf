/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:05:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, char xX, int *len)
{
	char	*base;

	if (xX == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_puthex(nb / 16, xX, len);
		ft_puthex(nb % 16, xX, len);
	}
	else
		ft_putchar(base[nb], len);
}

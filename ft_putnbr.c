/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:47 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 15:53:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", len);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-', len);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10, len);
			ft_putnbr(nb % 10, len);
		}
		else
			ft_putchar(nb + 48, len);
	}
}

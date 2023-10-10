/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:15:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:15:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlonghex(unsigned long add, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (add >= 16)
	{
		ft_putlonghex(add / 16, len);
		ft_putlonghex(add % 16, len);
	}
	else
		ft_putchar(base[add], len);
}

void	ft_putaddress(void *p, int *len)
{
	unsigned long	add;

	add = (unsigned long)p;
	ft_putstr("0x", len);
	ft_putlonghex(add, len);
}

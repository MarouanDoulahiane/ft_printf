/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:57:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 15:57:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, len);
		ft_putunsigned(nb % 10, len);
	}
	else
		ft_putchar(nb + 48, len);
}

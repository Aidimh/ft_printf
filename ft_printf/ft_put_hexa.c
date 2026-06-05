/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:04:02 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/24 17:26:44 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_hexa(unsigned int nbr)
{
	char	*base;
	int		record;

	record = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		record += ft_put_hexa(nbr / 16);
		record += ft_put_hexa(nbr % 16);
	}
	else
	{
		ft_putchar(base[nbr % 16]);
		record += 1;
	}
	return (record);
}

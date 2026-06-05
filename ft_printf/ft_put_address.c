/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:18:18 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/22 15:33:32 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_address(unsigned long nbr)
{
	char	*base;
	int		record;

	record = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		record += ft_put_address(nbr / 16);
		record += ft_put_address(nbr % 16);
	}
	else
		record += ft_putchar(base[nbr % 16]);
	return (record);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_major_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:03:51 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/22 12:41:08 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_major_hexa(unsigned int nbr)
{
	char	*base;
	int		record;

	base = "0123456789ABCDEF";
	record = 0;
	if (nbr >= 16)
	{
		record += ft_put_major_hexa(nbr / 16);
		record += ft_put_major_hexa(nbr % 16);
	}
	else
		record += ft_putchar(base[nbr % 16]);
	return (record);
}

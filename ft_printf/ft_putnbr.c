/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:03:33 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/23 10:51:45 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		record;
	long	nbr;

	nbr = nb;
	record = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nbr < 0)
	{
		record += write(1, "-", 1);
		nbr *= -1;
		record += ft_putnbr(nbr);
	}
	else if (nb > 9)
	{
		record += ft_putnbr(nbr / 10);
		record += ft_putnbr(nbr % 10);
	}
	else
		record += ft_putchar(nbr + 48);
	return (record);
}

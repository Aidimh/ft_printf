/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:02:46 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/22 09:43:21 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int nb)
{
	unsigned int	record;

	record = 0;
	if (nb > 9)
	{
		record += ft_putunsignednbr(nb / 10);
		record += ft_putunsignednbr(nb % 10);
	}
	else
		record += ft_putchar(nb + 48);
	return (record);
}

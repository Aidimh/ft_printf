/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:03:19 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/24 17:13:38 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	check_for_nil(unsigned long long nbr, int *rec)
{
	if (nbr == 0)
		*rec = ft_putstr("(nil)");
	else
	{
		*rec = ft_putstr("0x");
		*rec += ft_put_address(nbr);
	}
}

int	ft_check(va_list ap, int c)
{
	int					record;
	unsigned long long	nbr;

	record = 0;
	if (c == 'd' || c == 'i')
		record = ft_putnbr(va_arg(ap, int));
	else if (c == 'x')
		record = ft_put_hexa(va_arg(ap, unsigned int));
	else if (c == 'X')
		record = ft_put_major_hexa(va_arg(ap, unsigned int));
	else if (c == 's')
		record = ft_putstr(va_arg(ap, char *));
	else if (c == 'c')
		record = ft_putchar(va_arg(ap, int));
	else if (c == 'u')
		record = ft_putunsignednbr(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		nbr = va_arg(ap, unsigned long long);
		check_for_nil(nbr, &record);
	}
	else if (c == '%')
		return (ft_putchar('%'));
	return (record);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		record;

	va_start(ap, str);
	record = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				record += ft_check(ap, str[++i]);
		}
		else
			record += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (record);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-aid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:42:03 by moel-aid          #+#    #+#             */
/*   Updated: 2024/11/24 14:25:52 by moel-aid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putunsignednbr(unsigned int nb);
int	ft_putstr(char	*str);
int	ft_putnbr(int nb);
int	ft_put_major_hexa(unsigned int nbr);
int	ft_put_hexa(unsigned int nbr);
int	ft_put_address(unsigned long nbr);
int	ft_printf(const char	*str, ...);
int	ft_putchar(int c);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:42:01 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/05/30 12:51:53 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* count length of hexadecimal */
int	ft_hexcount(unsigned long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		count++;
	}
	return (count);
}

/* print int to lowercase hex conversion */
int	ft_printlowx(unsigned long nbr, const char *hexbase)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i += ft_printchar('0');
	if (nbr >= 16)
	{
		i += ft_printlowx(nbr / 16, "0123456789abcdef");
		i += ft_printlowx(nbr % 16, "0123456789abcdef");
	}
	if (nbr < 16 && nbr != 0)
		i += ft_printchar(hexbase[nbr]);
	return (i);
}

/* print int to uppercase hex conversion */
int	ft_printupx(unsigned long nbr, const char *hexbase)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_printupx(nbr / 16, "0123456789ABCDEF");
		i += ft_printupx(nbr % 16, "0123456789ABCDEF");
	}
	if (nbr < 16)
		i += ft_printchar(hexbase[nbr]);
	return (i);
}

/* print void pointer* to hex conversion */
int	ft_printptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += ft_printstr("0x0");
	else
	{
		count += ft_printstr("0x");
		count += ft_printupx(((unsigned long int)ptr), 0);
	}
	return (count);
}

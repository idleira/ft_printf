/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:01:11 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/05/30 14:07:43 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		i;
	char	c;

	i = ft_int_len(n);
	if (n == -2147483648)
		ft_printstr("-2147483648");
	else if (n < 0)
	{
		ft_printchar('-');
		n *= -1;
		i++;
	}
	if (n >= 10)
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else if (n != -2147483648)
	{
		c = n + '0';
		ft_printchar(c);
	}
	return (i);
}

int	ft_printunsign(unsigned int n)
{
	int		i;
	char	c;

	i = ft_int_len(n);
	if (n >= 10)
	{
		ft_printunsign(n / 10);
		ft_printunsign(n % 10);
	}
	else if (n < 10)
	{
		c = n + '0';
		ft_printchar(c);
	}
	return (i);
}

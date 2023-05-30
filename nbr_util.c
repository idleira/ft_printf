/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:01:11 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/05/30 11:43:25 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* count length of integer */
int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

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
	}
	if (n >= 10)
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else if (n < 10 && n != -2147483648)
	{
		c = n + '0';
		ft_printchar(c);
	}
	return (i);
}

int	ft_printunsign(unsigned long n)
{
	char	c;
	int		i;

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

// int	main()
// {
// 	int	x;
// 	int	y;

// 	x = 42;
// 	printnbr(x);
// 	printf("\n");
// 	y = 0x2A;
// 	printnbr(y);
// 	printf("\n");
// 	return (0);
// }
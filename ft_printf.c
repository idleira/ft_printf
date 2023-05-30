/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:09:03 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/05/30 14:15:18 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_fs(char str, va_list *args)
{
	int	count;

	count = 0;
	if (str == '%')
		count += ft_printchar('%');
	else if (str == 'c')
		count += ft_printchar(va_arg(*args, int));
	else if (str == 's')
		count += ft_printstr(va_arg(*args, char *));
	else if (str == 'i' || str == 'd')
		count += ft_printnbr(va_arg(*args, int));
	else if (str == 'u')
		count += ft_printunsign(va_arg(*args, unsigned int));
	else if (str == 'x')
		count += ft_printlowx(va_arg(*args, unsigned long), "0123456789abcdef");
	else if (str == 'X')
		count += ft_printupx(va_arg(*args, unsigned long), "0123456789ABCDEF");
	else if (str == 'p')
		count += ft_printptr(va_arg(*args, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_check_fs(str[i + 1], &args);
			i += 2;
		}
		else
		{
			count += ft_printchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	int				d;
// 	unsigned int	u;
// 	int				hex;
// 	int				*ptr;

// 	d = 42;
// 	ptr = &d;
// 	hex = 42;
// 	u = 42424242;
// 	ft_printf("my character: %c\n", 'i');
// 	printf("character: %c\n\n", 'i');
// 	ft_printf("my string: %s\n", "bonjour");
// 	printf("string: %s\n\n", "bonjour");
// 	ft_printf("my decimal integer: %d\n", d);
// 	printf("decimal integer: %d\n\n", d);
// 	ft_printf("my decimal integer (with sign): %i\n", -d);
// 	printf("decimal integer (with sign): %i\n\n", -d);
// 	ft_printf("my unsigned integer: %u\n", u);
// 	printf("unsigned integer: %u\n\n", u);
// 	ft_printf("my percent sign: %%\n");
// 	printf("percent sign: %%\n\n");
// 	ft_printf("my hexadecimal (lowercase): %x\n", hex);
// 	printf("hexadecimal (lowercase): %x\n\n", hex);
// 	ft_printf("my hexadecimal (uppercase): %X\n", hex);
// 	printf("hexadecimal (uppercase): %X\n\n", hex);
// 	ft_printf("my pointer: %p\n", ptr);
// 	printf("pointer: %p\n\n", ptr);
// 	return (0);
// }
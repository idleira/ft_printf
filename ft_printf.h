/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:32:54 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/05/30 14:12:30 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);

int				ft_printchar(char c);
int				ft_printstr(char *str);

int				ft_int_len(int n);
int				ft_printnbr(int n);
int				ft_printunsign(unsigned int n);

int				ft_int_len(int n);
int				ft_printptr(void *ptr);
int				ft_hexcount(unsigned long num);
int				ft_printupx(unsigned long nbr, const char *hexbase);
int				ft_printlowx(unsigned long nbr, const char *hexbase);

#endif
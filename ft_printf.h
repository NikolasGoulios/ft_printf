/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:03:05 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/20 10:25:54 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_putunsigned(unsigned int n);
int		ft_strchr(const char *s, int c);
int		ft_putchar(char c);
int		ft_puthexa(unsigned long n, char format);
int		ft_putaddress(void *format);

#endif
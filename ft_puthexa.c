/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:40:23 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/22 11:59:46 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	convert_to_hex_digit(int digit, char format)
{
	if (digit < 10)
		return (digit + '0');
	else if (format == 'x')
		return (digit - 10 + 'a');
	else if (format == 'X')
		return (digit - 10 + 'A');
	return (-1);
}

int	ft_puthexa(unsigned long n, char format)
{
	char	hex_digits[16];
	int		count;
	int		i;

	if (n == 0)
		return (ft_putchar('0'));
	count = 0;
	while (n > 0)
	{
		hex_digits[count] = convert_to_hex_digit(n % 16, format);
		n = n / 16;
		count++;
	}
	i = count - 1;
	while (i >= 0)
	{
		if (ft_putchar(hex_digits[i]) == -1)
			return (-1);
		i--;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:40:23 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/20 12:43:24 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_puthexa(unsigned long n, char format)
{
	int	temp;
	int	count;

	temp = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n) 
	{
		temp = n % 16;
		if (temp < 9)
			temp = temp + '0';
		else if (format == 'x')
			temp = temp + 'a' - 10;
		else if (format == 'X')
			temp = temp + 'A' - 10;
		if (write(1, &temp, 1) == -1)
			return (-1);
		n = n / 16;
		count++;
	}
	
	return (count);
}*/

int	ft_puthexa(unsigned long n, char format)
{
	char	hex_digits[16];
	int		count;
	int		i;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	else
		return (-1);  // Invalid format
	if (n == 0)
		return (ft_putchar('0'));
	count = 0;
	while (n > 0){
		hex_digits[count] = base[n % 16];
		n = n / 16;
		count++;
	}
	i = count - 1;
	while (i >= 0){
		if (ft_putchar(hex_digits[i]) == -1)
			return (-1);
		i--;
	}
	
	return (count);
}

/*static char	convert_to_hex_digit(int digit, char format)
{
	if (digit < 10)
		return (digit + '0');
	else if (format == 'x')
		return (digit - 10 + 'a');
	else if (format == 'X')
		return (digit - 10 + 'A');
	return ('\0');  // Should not reach here if format is valid
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
}*/

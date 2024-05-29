/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 09:58:55 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/29 12:56:10 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	ft_strlen(const char *s);
static int				rec_print(unsigned long n, const char *base);

int	ft_putaddress(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;

	n = (unsigned long)format;
	base = "0123456789abcdef"; // array of the base size [16] so we can identify the position and prin the correct character.
	len = ft_putstr("0x"); // 0x prefix is needed 
	if (len == -1)
		return (-1);
	len += rec_print(n, base); //Calling the funstion rec_print to convert and return the lenght int represantation of hexa.
	if (len == -1)
		return (-1);
	return (len);
}

static unsigned long	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

static int	rec_print(unsigned long n, const char *base)
{
	int	len;
	// we need to convert number one by one ot hexa format, like putnbr but with a difrent base . 
	len = 0;
	if (n > (ft_strlen(base) - 1))
		len += rec_print(n / ft_strlen(base), base); // recursivly devide the nummber if its more that 15 charachters that means we have more than one hexa number
	len += ft_putchar(*(base + (n % ft_strlen(base)))); // base[n % ft_strlen(base)] to check the current location of the number in hexa 
	if (len == -1)
		return (-1);
	return (len);
}

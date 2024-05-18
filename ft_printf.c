/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:51:49 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/18 13:26:30 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char format)
{
	//void	*ptr;

	if (format == 'c')
		return (ft_putchar((va_arg(args, int))));
	else if (format == 's')
		return (ft_putstr((va_arg(args, char *))));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr((va_arg(args, int))));
	else if (format == 'X' || format == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), format));
	/*else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_putaddress(ptr));
		return (ft_putstr("0x0"));
	}*/
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		index;
	int		length;

	va_start(args, s);
	index = 0;
	length = 0;
	while (*(s + index))
	{
		if (*(s + index) == '%' && ft_strchr("cspdiuxX%",
				*(s + index + 1)))
		{
			length += ft_format(args, *(s + index + 1));
			index++;
		}
		else
			length += ft_putchar(*(s + index));
		index++;
		if (length == -1)
		return (-1);
	}
	va_end(args);
	return (length);
}

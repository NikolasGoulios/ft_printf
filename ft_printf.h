/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:03:05 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/14 11:03:07 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

int	ft_printf(const char *s, ...);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *str);
char	*ft_itoa_unsigned(unsigned int n);


#endif
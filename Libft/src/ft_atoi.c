/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:39:50 by ngoulios          #+#    #+#             */
/*   Updated: 2024/04/25 11:43:24 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	long	results;
	long	sign;
	int		i;

	sign = 1;
	i = 0;
	results = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-' && ++i)
		sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + str[i] - 48;
		if (results < 0 && sign == 1)
			return (-1);
		if (results < 0 && sign == -1)
			return (0);
		i++;
	}
	return ((int)(results * sign));
}

static int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

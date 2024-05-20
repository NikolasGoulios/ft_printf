/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:35:08 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/20 10:28:37 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchr(const char *s, int c)
{
	unsigned char	lc ;

	lc = (unsigned char)c;
	while (*s)
	{
		if (*s == lc)
			return (1);
		s++;
	}
	if (lc == '\0')
		return (0);
	else
		return (-1);
	return (0);
}

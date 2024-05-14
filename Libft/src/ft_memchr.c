/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:07:42 by ngoulios          #+#    #+#             */
/*   Updated: 2024/04/22 12:59:09 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*str;

	index = 0;
	str = (char *)s;
	while (index < n)
	{
		if ((unsigned char)str[index] == (unsigned char) c)
			return (&str[index]);
		index++;
	}
	return (NULL);
}

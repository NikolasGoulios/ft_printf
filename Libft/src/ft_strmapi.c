/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:05:03 by ngoulios          #+#    #+#             */
/*   Updated: 2024/04/30 13:22:47 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*results;

	index = 0;
	results = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!results)
		return (NULL);
	while (index < ft_strlen(s))
	{
		results[index] = (*f)(index, s[index]);
		index++;
	}
	results[index] = 0;
	return (results);
}

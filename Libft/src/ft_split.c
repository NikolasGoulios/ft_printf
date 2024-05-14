/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:00:08 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/02 11:14:01 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_array(char ***result, int i);
static int	count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			i;
	const char	*start;

	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	if (!result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_substr(start, 0, s - start);
			if (result[i] == NULL)
				return (free_array(&result, i));
			i++;
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	*free_array(char ***result, int i)
{
	while (--i >= 0)
	{
		free((*result)[i]);
		(*result)[i] = NULL;
	}
	free(*result);
	(*result) = NULL;
	return (0);
}

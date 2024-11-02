/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:14:16 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 19:07:23 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	while (s[i])
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
			j++;
	return (j);
}

void	traverse_string(size_t len, char const *s, char c)
{
	len = 0;
	while (*s && *s != c)
	{
		++len;
		++s;
	}
}

void	free_all(char **ptr, size_t i)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	len;
	size_t	i;

	i = 0;
	ptr = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!ptr)
	{
		free_all(ptr, i);
		return (0);
	}
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			traverse_string(len, s, c);
			ptr[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ptr[i] = 0;
	return (ptr);
}

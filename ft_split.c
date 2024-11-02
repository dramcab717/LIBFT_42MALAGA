/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:14:16 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 14:22:35 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	len;
	size_t	i;

	ptr = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				++len;
				++s;
			}
			ptr[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ptr[i] = 0;
	return (ptr);
}

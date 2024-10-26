/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:16:19 by epedrosa          #+#    #+#             */
/*   Updated: 2024/09/24 18:36:46 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest || !src)
		return (dest);
	if (n == 0)
		return (dest);
	if (s < d && s + n > d)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}

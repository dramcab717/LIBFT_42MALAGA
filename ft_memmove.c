/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:16:19 by epedrosa          #+#    #+#             */
/*   Updated: 2024/09/18 21:11:19 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		m_dest;
	unsigned const char	m_src;
	size_t				i;

	m_dest = (unsigned char *)dest;
	m_src = (unsigned const char *)src;
	i = 0;
	if (m_dest == m_src)
		return (dest);
	if (m_src > m_dest)
		ft_memcpy(dest, src, n);
	else if (m_src < m_dest)
	{
		while (n-- > 0)
		{
			m_dest[n] = m_src[n];
		}
		return (dest);
	}
	return (0);
}

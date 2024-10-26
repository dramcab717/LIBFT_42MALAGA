/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:51:08 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/16 17:32:35 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n, int len)
{
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = 0;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	len = ft_numlen(n, len);
	if (n < 0)
		n = -n;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (n > 0)
	{
		ptr[--len] = n % 10 + '0';
		n = n / 10;
	}
	if (len != 0)
		ptr[0] = '-';
	return (ptr);
}

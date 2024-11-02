/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:51:44 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/13 17:51:44 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	if (n == -2147483647)
		write(fd, "-2147483647", 12);
	else
	{
		str = ft_itoa(n);
		if (str)
		{
			write(fd, str, ft_strlen(str));
			free (str);
		}
	}
}

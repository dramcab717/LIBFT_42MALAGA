/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:43 by epedrosa          #+#    #+#             */
/*   Updated: 2024/09/11 13:15:45 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    int ans;

    ans = 0;
    if (c >= 32 && c <= 126)
    {
        ans = 1;
    }
    return(ans);
}
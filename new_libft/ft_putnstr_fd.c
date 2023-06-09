/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:37:53 by rbiodies          #+#    #+#             */
/*   Updated: 2021/12/14 17:56:57 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_putnstr_fd(char *str, int n, int fd)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		while (str[i] && i < (int)ft_strlen(str) + n)
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
	else
	{
		while (str[i] && i < n)
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}		
}

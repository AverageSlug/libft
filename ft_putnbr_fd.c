/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:16:29 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/31 12:37:20 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long temp;

	temp = n;
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp = temp * (-1);
	}
	if (temp > 9)
		ft_putnbr_fd(temp / 10, fd);
	ft_putchar_fd(temp % 10 + '0', fd);
}

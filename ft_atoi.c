/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:26:36 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/21 14:10:14 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	p;
	int					boo;

	p = 0;
	boo = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
			*str == '\r' || *str == ' ')
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			boo = -1;
	}
	while (*str >= 48 && *str <= 57)
	{
		if (p > 9223372036854775807)
		{
			if (boo == -1)
				return (0);
			else
				return (-1);
		}
		p = p * 10 + (*str++ - 48);
	}
	return (p * boo);
}

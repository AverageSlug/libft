/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:09:55 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/17 16:09:16 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checknumsize(long n)
{
	int		l;

	l = 0;
	if (n < 0)
	{
		n = n * (-1);
		l++;
	}
	while (n >= 10)
	{
		n = n / 10;
		l++;
	}
	return (l + 1);
}

char		*ft_itoa(int n)
{
	long	nb;
	int		g;
	char	*i;

	nb = n;
	g = ft_checknumsize(nb);
	if (!(i = (char*)malloc(sizeof(char) * (g + 1))))
		return (0);
	i[g--] = '\0';
	if (nb < 0)
	{
		i[0] = '-';
		nb = nb * (-1);
	}
	while (nb >= 10)
	{
		i[g--] = '0' + (char)(nb % 10);
		nb = nb / 10;
	}
	i[g] = '0' + (char)(nb % 10);
	return (i);
}

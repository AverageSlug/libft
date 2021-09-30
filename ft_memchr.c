/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:04:07 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/11 10:43:32 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			x;

	x = 0;
	t = (unsigned char*)s;
	while (n--)
	{
		if (t[x] == (unsigned char)c)
			return (t + x);
		x++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:03:26 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/21 17:03:09 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstdst;
	unsigned char	*srcsrc;
	size_t			x;

	if (!(src || dst))
		return (0);
	if (src == dst)
		return (dst);
	x = 0;
	dstdst = (unsigned char*)dst;
	srcsrc = (unsigned char*)src;
	if (srcsrc > dstdst)
	{
		while (++x <= len)
			dstdst[x - 1] = srcsrc[x - 1];
	}
	else
	{
		while (len-- > 0)
			dstdst[len] = srcsrc[len];
	}
	return (dst);
}

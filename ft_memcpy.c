/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:06:58 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/17 11:56:09 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dstdst;
	unsigned char *srcsrc;

	dstdst = (unsigned char*)dst;
	srcsrc = (unsigned char*)src;
	if (!n)
		return (dst);
	if (!dstdst && !srcsrc && n)
		return (0);
	while (n--)
		*dstdst++ = *srcsrc++;
	return (dst);
}

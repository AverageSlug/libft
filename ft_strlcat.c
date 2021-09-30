/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:33:05 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/14 13:23:21 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	x;
	unsigned long	y;
	unsigned long	z;

	x = 0;
	z = 0;
	while (dst[x])
		x++;
	while (src[z])
		z++;
	if (size <= x)
		z += size;
	else
		z += x;
	y = 0;
	while (src[y] && (x + 1) < size)
		dst[x++] = src[y++];
	dst[x] = 0;
	return (z);
}

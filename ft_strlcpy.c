/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:25:17 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/17 14:56:53 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	r;
	size_t	s;

	if (!size)
		return (ft_strlen(src));
	r = 0;
	while (src[r])
		r++;
	s = 0;
	while (src[s] && s < (size - 1))
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = '\0';
	return (r);
}

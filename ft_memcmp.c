/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:21:23 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/11 11:25:53 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1s1;
	unsigned char	*s2s2;

	s1s1 = (unsigned char*)s1;
	s2s2 = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*s1s1 != *s2s2)
			return (*s1s1 - *s2s2);
		s1s1++;
		s2s2++;
	}
	return (0);
}

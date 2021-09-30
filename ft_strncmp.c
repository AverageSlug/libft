/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:08:36 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/21 18:11:57 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	if (n == 0 && *s1 && *s2)
	{
		s1--;
		s2--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

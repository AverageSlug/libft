/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:35:10 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/14 17:39:56 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	y;
	size_t	z;

	if (!*needle)
		return ((char*)haystack);
	z = 0;
	while (haystack[z] && z < len)
	{
		if (haystack[z] == needle[0])
		{
			y = 1;
			while (needle[y] && haystack[y + z] == needle[y] && (y + z) < len)
				y++;
			if (!needle[y])
				return ((char*)&haystack[z]);
		}
		z++;
	}
	return (0);
}

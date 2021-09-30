/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:43:32 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/28 10:36:41 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*test;
	size_t	x;
	size_t	sl;

	if (!s)
		return (0);
	sl = ft_strlen(s);
	x = 0;
	if (start > sl)
		len = 0;
	else if (start + len > sl)
		len = sl - start;
	if (!(test = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (x < len)
	{
		test[x] = s[start + x];
		x++;
	}
	test[x] = '\0';
	return (test);
}

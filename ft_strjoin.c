/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:11:24 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/28 10:40:03 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	int		x;
	char	*s3;

	if (!s1 || !s2)
		return (0);
	x = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(s3 = malloc(sizeof(char) * (s1len + s2len + 1))))
		return (0);
	while (*s1)
		s3[x++] = *s1++;
	while (*s2)
		s3[x++] = *s2++;
	s3[x] = '\0';
	return (s3);
}

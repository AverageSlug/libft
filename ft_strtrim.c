/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:10:45 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/29 11:37:15 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char c, char const *set)
{
	while (*set != 0)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_trimlen(char const *s1, char const *set, int len)
{
	while (ft_trim(s1[len - 1], set))
		len--;
	while (ft_trim(*s1, set))
	{
		len--;
		s1++;
	}
	if (len < 0)
		return (0);
	return (len);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		len;
	int		size;
	int		c;

	if (!s1 || !set)
		return (0);
	c = 0;
	len = ft_strlen(s1);
	size = ft_trimlen(s1, set, len);
	if (!(trimmed = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (ft_trim(s1[c], set))
		c++;
	trimmed[size] = '\0';
	while (size--)
		trimmed[size] = s1[size + c];
	return (trimmed);
}

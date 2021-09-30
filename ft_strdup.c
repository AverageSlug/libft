/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:42:09 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/11 11:45:25 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		num;
	char	*s1s1;

	num = ft_strlen(s1);
	if (!(s1s1 = malloc(sizeof(char) * num + 1)))
		return (0);
	num = 0;
	while (*s1)
		s1s1[num++] = *s1++;
	s1s1[num] = '\0';
	return (s1s1);
}

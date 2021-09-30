/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:39:22 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/29 15:15:30 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		z;
	char	*y;

	if (!s || !f)
		return (0);
	if (!(y = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	z = 0;
	while (s[z])
	{
		y[z] = f(z, s[z]);
		z++;
	}
	y[z] = '\0';
	return (y);
}

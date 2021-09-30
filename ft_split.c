/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaurids <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:38:06 by nlaurids          #+#    #+#             */
/*   Updated: 2019/10/30 12:29:51 by nlaurids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_complete_tab(const char *str, int min, int max)
{
	char	*tab;
	int		size;
	int		x;

	x = 0;
	size = max - min;
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (min < max)
	{
		tab[x] = str[min];
		min++;
		x++;
	}
	tab[x] = 0;
	return (tab);
}

static void	ft_text(char const *s, char c, int a, char **ret)
{
	int	x;
	int	t;

	x = 0;
	t = 0;
	while (s[++a])
		if (s[a] == c || !(s[a + 1]))
		{
			if (!(s[a + 1]) && !(s[a] == c))
				ret[t++] = ft_complete_tab(s, a - x, a + 1);
			else if (x > 0)
				ret[t++] = ft_complete_tab(s, a - x, a);
			if (t != 0 && !(ret[t - 1]))
			{
				while (t - 1)
					free(ret[--t - 1]);
				return ;
			}
			x = 0;
		}
		else
			x++;
	ret[t] = 0;
}

static int	splitlen(char const *s, char c)
{
	int	a;
	int	x;
	int	size;

	a = 0;
	x = 0;
	size = 0;
	while (s[a])
	{
		if (s[a] == c || !(s[a + 1]))
		{
			if (!(s[a + 1] && s[a] == c))
				x++;
			if (x > 0)
				size++;
			x = 0;
		}
		else
			x++;
		a++;
	}
	return (size);
}

char		**ft_split(char const *s, char c)
{
	int		size;
	char	**ret;
	int		a;

	if (!s)
		return (0);
	size = splitlen(s, c);
	if (!(ret = malloc(sizeof(char *) * (size + 1))))
		return (0);
	a = -1;
	ft_text(s, c, a, ret);
	return (ret);
}

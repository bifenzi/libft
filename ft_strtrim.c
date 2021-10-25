/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:11:52 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/11/06 20:44:49 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		left(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (s1[i] == set[j])
			i++;
		else
			break ;
	}
	return (i);
}

static int		right(char const *s1, char const *set, int i)
{
	int k;
	int l;

	k = 0;
	while (s1[k] != '\0')
		k++;
	while (k >= i)
	{
		l = 0;
		while (s1[k] != set[l] && set[l] != '\0')
			l++;
		if (s1[k] == set[l])
			k--;
		else
			break ;
	}
	return (k);
}

static char		*protect(char const *s1)
{
	int		kolchi;
	char	*new;
	int		t;

	t = 0;
	kolchi = ft_strlen(s1) + 1;
	if (!(new = malloc(sizeof(char) * (kolchi))))
		return (0);
	while (t < kolchi)
	{
		new[t] = s1[t];
		t++;
	}
	new[t] = '\0';
	return (new);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		newi;
	int		i;
	int		droit;
	int		totalsize;

	if (!s1)
		return (0);
	i = left(s1, set);
	droit = right(s1, set, i);
	newi = 0;
	totalsize = droit - i + 1;
	if (set == NULL)
		return (protect(s1));
	if (!(new = malloc((totalsize + 1) * sizeof(char))))
		return (0);
	while (newi < totalsize)
	{
		new[newi] = s1[i];
		newi++;
		i++;
	}
	new[newi] = '\0';
	return (new);
}

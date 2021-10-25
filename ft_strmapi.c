/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:54:07 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/10/30 18:41:59 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*all;

	i = 0;
	if (s == NULL)
		return (0);
	l = ft_strlen(s);
	if (!(all = malloc((l + 1) * sizeof(char))))
		return (0);
	while (s[i])
	{
		all[i] = (*f)(i, s[i]);
		i++;
	}
	all[i] = '\0';
	return (all);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:28:10 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/10/19 16:57:44 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i != 0 && str[i] != c)
	{
		i--;
	}
	if (str[i] == c)
	{
		return ((char*)str + i);
	}
	else
		return (0);
}

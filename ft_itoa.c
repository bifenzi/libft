/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:17:30 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/11/05 15:40:52 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(long n)
{
	int		len;

	len = 0;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	m;
	int		i;
	int		f;

	m = (long)n;
	i = len(m);
	f = 0;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i] = '\0';
	if (m < 0)
	{
		f = 1;
		str[0] = '-';
		m = m * (-1);
	}
	while (i-- > f)
	{
		str[i] = 48 + (m % 10);
		m = m / 10;
	}
	return (str);
}

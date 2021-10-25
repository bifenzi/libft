/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:05:29 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/11/05 11:35:41 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	if (dst == NULL && src == NULL)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		dest = ((char *)dst) + (len - 1);
		source = ((char *)src) + (len - 1);
		while (len--)
		{
			*(dest--) = *(source--);
		}
	}
	return (dst);
}

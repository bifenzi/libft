/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 04:20:51 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/11/07 14:39:04 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(const char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	s_walo;
	char	*dest;

	s_dst = 0;
	s_src = 0;
	s_walo = 0;
	dest = (char *)dst;
	while (dst[s_dst])
		s_dst++;
	while (src[s_src])
		s_src++;
	if (!dst && size == 0)
		return (s_src);
	if (size > s_dst)
		s_src += s_dst;
	else
		s_src += size;
	while (src[s_walo] && s_dst + 1 < size)
	{
		dest[s_dst++] = src[s_walo++];
	}
	dest[s_dst] = '\0';
	return (s_src);
}

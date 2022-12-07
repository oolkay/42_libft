/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:06:15 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/15 16:47:25 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen + size);
	dstlen = ft_strlen(dst);
	i = dstlen;
	j = 0;
	if (size <= dstlen)
		return (srclen + size);
	while (src[j] != '\0' && j < size - dstlen - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

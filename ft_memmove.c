/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:55:34 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/15 10:43:58 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*tdst;
	char	*tsrc;

	tdst = (char *)dest;
	tsrc = (char *)src;
	if (tdst > tsrc)
	{
		while (len-- > 0)
			tdst[len] = tsrc[len];
		return (dest);
	}
	else
		return (ft_memcpy(tdst, tsrc, len));
	return (dest);
}

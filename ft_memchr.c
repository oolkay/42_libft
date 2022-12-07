/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:09:05 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/08 16:22:52 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
		n--;
	}
	return (NULL);
}

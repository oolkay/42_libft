/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:49:20 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/17 11:35:46 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;
	char	*str;

	str = (char *)s;
	n = ft_strlen(s);
	if (c == '\0')
		return (str + n);
	while (n > 0)
	{
		if (str[n] == (char)c)
			return (&str[n]);
		n--;
	}
	if (str[n] == (char)c)
		return (&str[n]);
	return (0);
}

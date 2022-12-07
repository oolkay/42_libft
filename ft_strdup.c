/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:54:55 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/12 16:48:56 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (s1 != NULL)
	{
		while (0 < i)
		{
			str[i] = s1[i];
			i--;
		}
		str[i] = s1[i];
		return (str);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:20 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/08 17:04:52 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*temps1;
	unsigned char	*temps2;
	size_t			i;

	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (temps1[i] != '\0' || temps2[i] != '\0'))
	{
		if (temps1[i] > temps2[i])
			return (1);
		else if (temps1[i] < temps2[i])
			return (-1);
		i++;
	}
	return (0);
}

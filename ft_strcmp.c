/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:30:28 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/08 17:14:34 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*temps1;
	unsigned char	*temps2;
	int				i;

	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	i = 0;
	while (temps1[i] != '\0' || temps2[i] != '\0')
	{
		if (temps1[i] > temps2[i])
			return (1);
		else if (temps2[i] > temps1[i])
			return (-1);
		i++;
	}
	return (0);
}

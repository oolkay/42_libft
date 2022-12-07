/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:21:00 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/08 18:01:02 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*newstr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{	
		newstr[i] = ((char *)s1)[i];
		i++;
	}		
	while (s2[i - len1] != '\0')
	{		
		newstr[i] = ((char *)s2)[i - len1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

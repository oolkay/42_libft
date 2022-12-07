/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:30:47 by oolkay            #+#    #+#             */
/*   Updated: 2022/10/08 16:21:59 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

static char	*convertdigit(long long nbr, int len, char *str)
{
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = 0 + 48;
	str[len] = '\0';
	len--;
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	long long	n;
	int			len;
	char		*str;

	n = nbr;
	len = intlen(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	convertdigit(n, len, str);
	return (str);
}

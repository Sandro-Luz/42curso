/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:23:48 by marvin            #+#    #+#             */
/*   Updated: 2023/05/05 12:23:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	size(int n)
{
	size_t size;
    long nbr;

    nbr = n;
    if (nbr > 0)
	    size = 0;
    else
	    size = 1;

    if (nbr >= 0)
	    nbr = n;
    else
	    nbr = -n;
	while (n)
	{
		n /= 10;
		size += (size > 0);
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	len;

	nbr = n;
	len = size(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	while (nbr > 0)
	{
		str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (len == 0 && str[1] == '\0')
		str[len] = '0';
	else if (len == 0 && str[1] != '\0')
		str[len] = '-';
	return (str);
}
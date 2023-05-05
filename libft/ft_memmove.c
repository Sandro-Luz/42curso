/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:57 by marvin            #+#    #+#             */
/*   Updated: 2023/05/04 10:00:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest1;
	const unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char*)dest;
	src1 = (const unsigned char*)src;
	if(dest1 < src1)
	{	while(i <= n)
		{
			dest1[i] = src1[i];
			i++;
		}	
	}
	else
	{
		while (i == n)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
	}
	return dest;
}
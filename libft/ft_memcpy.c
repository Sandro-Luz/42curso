/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:51 by marvin            #+#    #+#             */
/*   Updated: 2023/05/04 10:07:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while(i < n)
	{
			d[i] = s[i];
			i++;
	}
	return (dest);
}
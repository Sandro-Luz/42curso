/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:35 by marvin            #+#    #+#             */
/*   Updated: 2023/05/05 15:46:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char *p;

	p = str;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return (void *)p;
		p++;
	}
	return (NULL);
}

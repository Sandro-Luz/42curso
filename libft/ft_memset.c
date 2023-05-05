/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:05 by marvin            #+#    #+#             */
/*   Updated: 2023/05/04 19:28:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	conversion;
	size_t	ite;
	unsigned char	*s;

	conversion = (unsigned char)c;
	ite = 0;
	s =  (unsigned char *)str;
	while(ite < n)
	{
			s[ite] = conversion;
			ite++;
	}
	return (str);
}

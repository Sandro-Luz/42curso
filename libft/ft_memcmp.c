/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:41 by marvin            #+#    #+#             */
/*   Updated: 2023/05/04 18:36:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int	result;

	str1 = s1;
	str2 = s2;
	result = 0;
	while(n-- > 0)
	{
		result = *str1 - *str2;
		str1++;
		str2++;
		if(result != 0)
			break;
	}
	return result;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:03 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 21:23:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isascii(int c)
{
	unsigned char	i;

	i = c + '0';

	if( i > 0 && i <= 127)
		return (1);
	return (0);
}

/*#include<stdio.h>
int main()
{
	char c;

	c = 40;
	printf("%d\n", ft_isascii(c));
}*/

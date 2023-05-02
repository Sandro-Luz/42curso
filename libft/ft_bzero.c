/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:54:25 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 21:21:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while( str[i] != '\0')
	{
		if(i <= n)
		{
			str[i] = 32;
			i++;
		}
		i++;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void test_bzero() 
{
	    char buf[100];
	        memset(buf, 'A', 100);
		ft_bzero(buf, 50);  // Zero out the first 50 bytes
		for (int i = 0; i < 50; i++) 
		{
			if (buf[i] != '\0')
		       	{
			       	printf("Test failed: bzero did not zero out the buffer correctly.\n");
				return;
			}
		}
		printf("Test passed: bzero zeroed out the buffer correctly.\n");
}
					
int main()
{
	test_bzero();
        return 0;
}

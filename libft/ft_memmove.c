/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:57 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:55:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char	*dest1;
	const unsigned char	*src1;

	dest1 = (unsigned char*)dest;
	src1 = (const unsigned char*)src1;
	while(*src1 != '\0' && i <= n)
	{
		*dest1 = *src1;
		src1++;
		dest1++;
	}
	return dest1;
}

#include <stdio.h>
#include <string.h>

int main()
{
	    char str1[] = "Hello, world!";
	        char str2[] = "Hi, there!";
		    size_t n = strlen(str1) + 1;

		        // Copy str1 to str2, with overlap
			    ft_memmove(str2, str1, n);
			
			         printf("str1: %s\n", str1);
			             printf("str2: %s\n", str2);
			
			                 return 0;
			                 }

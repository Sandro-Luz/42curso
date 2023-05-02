/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:51 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 21:28:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const char *s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (const char *)src;
	i = 0;

	while(s[i] != '\0')
	{
		if(i <= n)
		{
			d[i] = s[i];
			i++;
		}
		i++;
	}
	return (d);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
	   const char src[50] = "http://www.tutorialspoint.com";
	      char dest[50];
	         strcpy(dest,"Heloooo!!");
		    printf("Before memcpy dest = %s\n", dest);
		       memcpy(dest, src, strlen(src)+1);
		          printf("After memcpy dest = %s\n", dest);
			     
			     return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:05 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 21:30:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	conversion;
	size_t	ite;
	unsigned char	*s;

	conversion = c + '0';
	ite = 0;
	s =  (unsigned char *)str;
	while(s[ite] != '\0')
	{
		if(ite <= n)
		{
			s[ite] = conversion;
			ite++;
		}
		ite++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
	   char str[50];

	      strcpy(str,"This is string.h library function");
	         puts(str);

		    memset(str,'$',7);
		       puts(str);
		          
		          return(0);
}*/

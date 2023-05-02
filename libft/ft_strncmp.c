/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:37 by marvin            #+#    #+#             */
/*   Updated: 2023/05/02 14:06:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	count;
	size_t	count1;

	i = 0;
	count = 0;
	while(str1[i] != '\0' && str2[i] != '\0' && i <= n)
	{
		count = count + (count + str1[i]);
		count1 = count1 + (count1 + str2[i]);
		i++;
	}
	return count + count1;
}
#include <stdio.h>
#include <string.h>

int main () {
	   char str1[15];
	      char str2[15];
	         int ret;

		    strcpy(str1, "abcdef");
		       strcpy(str2, "ABCDEF");

		          ret = ft_strncmp(str1, str2, 4);

			     if(ret < 0) {
				           printf("str1 is less than str2");
					      } else if(ret > 0) {
						            printf("str2 is less than str1");
							       } else {
								             printf("str1 is equal to str2");
									        }
			        
			        return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:41 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:55:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int	result;

	str1 = s1;
	str2 = s2;
	result = *str1 - *str2;
	while(n-- > 0)
	{
		result += result;
		s1++;
		s2++;
	}
	return result;
}
#include <stdio.h>
#include <string.h>

int main() {
	    char str1[] = "hello";
	        char str2[] = "world";
		    int result = ft_memcmp(str1, str2, 3);
		        if (result == 0) {
				        printf("The first three characters of str1 and str2 are equal.\n");
					    } else if (result < 0) {
						            printf("The first three characters of str1 are less than str2.\n");
							        } else {
									        printf("The first three characters of str1 are greater than str2.\n");
										    }
			    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:40 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:56:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	
}

#include <assert.h>
#include <string.h>

int main() {
	  const char* haystack = "Hello, world!";
	    const char* needle1 = "world";
	      const char* needle2 = "goodbye";
	        
	        // Test case 1: Search for a needle that is in the haystack
		   const char* result1 = ft_strnstr(haystack, needle1, strlen(haystack));
		     assert(result1 != NULL);
		       assert(strcmp(result1, "world!") == 0);
		         
		           // Test case 2: Search for a needle that is not in the haystack
		             const char* result2 = ft_strnstr(haystack, needle2, strlen(haystack));
		               assert(result2 == NULL);
		                 
		                   // Test case 3: Search for a needle with length greater than the haystack
		                     const char* result3 = ft_strnstr(haystack, needle1, strlen(haystack) - 1);
		                       assert(result3 == NULL);
		                         
		                           // Test case 4: Search for an empty needle
		                             const char* result4 = ft_strnstr(haystack, "", strlen(haystack));
		                               assert(result4 != NULL);
		                                 assert(strcmp(result4, haystack) == 0);
		                                   
       		                               return 0;
		                                     }
		

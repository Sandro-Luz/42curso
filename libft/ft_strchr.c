/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:09 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 14:18:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c)
{
	const char *p;

	p = str;
	while(*p != '\0')
	{
		if(*p == c)
			return (char*)p;
		p++;
	}
	if(*p == c)
		return (char*)p;
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () {
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = ':';
	char *ret;
	
	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
				          
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:35 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 21:27:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char *p;

	p = str;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return (void *)p;
		p++;
	}
	return ((char*)p);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hello world";
	char *p = (char *)ft_memchr(str, 'w', strlen(str));
	if (p != NULL)
	{
		printf("Found 'w' at position %ld\n", p - str);
	}
	else
	{
		printf("Did not find 'w'\n");
	}
	return 0;
}*/

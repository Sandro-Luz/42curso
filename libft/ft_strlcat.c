/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:12 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:56:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(dest[i] != '\0' && i < size)
		i++;
	while(src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while(src[j] != '\0')
		j++;
	return (i + j);
}
#include<stdio.h>
int main(void)
{
	char dst[10] = "hello";
	char src[7] = " world";
	size_t result = ft_strlcat(dst, src, sizeof(dst));
	printf("concatenated string: %s\n", dst);
	printf("len of con string: %zu \n", result);
	return 0;
}

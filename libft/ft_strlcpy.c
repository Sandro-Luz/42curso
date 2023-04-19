/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:14 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:56:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while(src[len] != '\0')
		len++;
	while(src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return len;
}

#include<stdio.h>
int main(void)
{
    char src[] = "This is a test string.";
    char dest[16];
    size_t len;

    len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Destination string: %s\n", dest);
    printf("Length of source string: %zu\n", len);

    return 0;
}

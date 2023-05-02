/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:17 by marvin            #+#    #+#             */
/*   Updated: 2023/05/02 14:13:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_strlen(char *s)
{
	size_t	i;
	i = 0;
	while( s[i] != '\0')
		i++;
	return (i);
}

/*#include<stdio.h>
int main()
{
	char s[10] = "asdafas";
	printf("%d\n", ft_strlen(s));
}*/

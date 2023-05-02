/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:45 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 14:22:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	char	s;

	s = (char)c;
	if(s >= 'A' && s <= 'Z')
		s = s + 32;
	return (s);
}
#include<stdio.h>
int main() {
	char c = 'i';
	char uppercase_c = ft_tolower(c);
	printf("Uppercase version of %c is %c\n", c, uppercase_c);
	return 0;
}


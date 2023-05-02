/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:56:48 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 14:22:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char	s;

	s = (char)c;
	if(s >= 'a' && s <= 'z')
		s = s - 32;
	return (s);
}

/*#include<stdio.h>
int main() {
	char c = 'a';
	char uppercase_c = ft_toupper(c);
	printf("Uppercase version of %c is %c\n", c, uppercase_c);
	return 0;
}*/


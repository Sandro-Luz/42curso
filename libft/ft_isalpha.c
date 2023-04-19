/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:54:54 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:54:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
int 	isalpha(int c)
{
	if( c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int main()
{
	char c;

	c = 'a';
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:54:46 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:54:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalnum(int c)
{
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
		return (1);
	return (0);
}
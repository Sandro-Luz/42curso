/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:55:12 by marvin            #+#    #+#             */
/*   Updated: 2023/04/19 19:55:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

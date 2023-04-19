/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:48:46 by luide-so          #+#    #+#             */
/*   Updated: 2023/04/19 15:50:48 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isprint(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
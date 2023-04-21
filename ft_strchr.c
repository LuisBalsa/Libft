/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:21:43 by luide-so          #+#    #+#             */
/*   Updated: 2023/04/21 18:16:25 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, char c)
{
	char	*a;

	a = (char *)s;
	while (*a)
	{
		if (*a == c)
			return (a);
		a++;
	}
	if (*a == c)
		return (a);
	return (NULL);
}

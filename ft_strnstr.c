/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:54:53 by luide-so          #+#    #+#             */
/*   Updated: 2023/04/22 12:38:16 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && len--)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && len--)
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
		j++;
		}
		i++;
	}
	return (NULL);
}

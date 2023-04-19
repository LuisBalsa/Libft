/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:06:23 by luide-so          #+#    #+#             */
/*   Updated: 2023/04/18 15:59:07 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    printf("\nDeve retornar %d: %d\nDeve retornar %d: %d\n\n", isalpha('a'), ft_isalpha('a'), isalpha('8'), ft_isalpha('8'));
    return (0);
}
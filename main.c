/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:06:23 by luide-so          #+#    #+#             */
/*   Updated: 2023/04/19 15:11:37 by luide-so         ###   ########.fr       */
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
    printf("\n_______________\n\nTest ft_isalpha\n\n");
    printf("\nSould return %d: %d\nSould return %d: %d\n\n", isalpha('a'), ft_isalpha('a'), isalpha('8'), ft_isalpha('8'));
    printf("\n_______________\n\nTest ft_isdigit\n\n");
    printf("\nSould return %d: %d\nSould return %d: %d\n\n", isdigit('a'), ft_isdigit('a'), isdigit('8'), ft_isdigit('8'));
    printf("\n_______________\n\nTest ft_isalnum\n\n");
    printf("\nSould return %d: %d\nSould return %d: %d\n\n", isalnum('a'), ft_isalnum('a'), isalnum('8'), ft_isalnum('8'));
    printf("\n_______________\n\nTest ft_isascii\n\n");
    printf("\nSould return %d: %d\nSould return %d: %d\n\n", isascii('#'), ft_isascii('#'), isascii('8'), ft_isascii('8'));
    return (0);
}

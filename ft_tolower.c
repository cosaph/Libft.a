/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosaph <cosaph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:38:27 by cosaph            #+#    #+#             */
/*   Updated: 2023/10/03 11:50:03 by cosaph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/* #include <stdio.h>

int main() {
	char lowercase = 'Z';
	char uppercase = ft_tolower(lowercase);
	
	printf("Lowercase: %c\n", uppercase);
	
	return 0;
} */
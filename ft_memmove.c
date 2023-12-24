/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosaph <cosaph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:35:16 by cosaph            #+#    #+#             */
/*   Updated: 2023/11/23 13:20:53 by cosaph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*destination;
	size_t	i;

	source = (char *)src;
	destination = (char *)dest;
	i = 0;
	if (destination == NULL && source == NULL)
		return (NULL);
	if (destination > source)
		while (n-- > 0)
			destination[n] = source[n];
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (destination);
}

/* #include <stdio.h>
#include <string.h>


int main()
{
	char source[] = "Hello, World!";
	size_t length = strlen(source) + 1;  // inclut le caractère nul de fin de chaîne

	char destination[length];
	
	ft_memmove(destination, source, length);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosaph <cosaph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:48:11 by cosaph            #+#    #+#             */
/*   Updated: 2023/11/14 16:35:34 by cosaph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)s;
	i = 0;
	while (i++ < n)
	{
		*temp = '\0';
		temp++;
	}
}

// #include <stdio.h>
// #include <strings.h>
// int main()
// {
//     char s1[100] = "0123456789";
//     char s2[100] = "0123456789";
//     ft_bzero(&s1, 4);
//     bzero(&s2, 4);
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%c", s1[i]);
//         printf("%c", ' ');
//         printf("%c\n", s2[i]);
//     }
// }
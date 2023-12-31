/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosaph <cosaph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:14:34 by cosaph            #+#    #+#             */
/*   Updated: 2023/11/08 17:38:18 by cosaph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*ptr = value;
		ptr++;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// int main()
// {
// 	char str[20] = "Hello, world!";
// 	printf("Avant ft_memset : %s\n", str);
// 	ft_memset(str, 'A', 4);
// 	printf("Après ft_memset : %s\n", str);
// 	return 0;
// }
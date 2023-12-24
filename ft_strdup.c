/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosaph <cosaph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:19:09 by cosaph            #+#    #+#             */
/*   Updated: 2023/11/25 17:54:25 by cosaph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}

/* size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "hello world!";
	char *s2 = ft_strdup(s1);
	char *s3 = strdup(s1);
	printf("ft_strdup : %s\n", s2);
	printf("strdup : %s\n", s3);
	return (0);
}
 */
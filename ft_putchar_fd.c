/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosaph <cosaph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:59:34 by cosaph            #+#    #+#             */
/*   Updated: 2023/12/23 18:21:27 by cosaph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putchar_fd(argv[1][0], 1);
	}
	return 0;
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:20:43 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/14 18:31:37 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	cadena[4];

	cadena[0] = 'H';
	cadena[1] = 'o';
	cadena[2] = 'l';
	cadena[3] = 'a';
	ft_putstr(cadena);
}

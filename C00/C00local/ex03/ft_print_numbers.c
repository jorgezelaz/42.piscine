/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:13:09 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/12 11:25:53 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		n;
	char	pintanum;

	n = 0;
	while (n <= 9)
	{
		pintanum = '0' + n;
		write(1, &pintanum, 1);
		n++;
	}
}

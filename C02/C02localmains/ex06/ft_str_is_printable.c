/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:51:05 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/20 11:02:40 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 33) && (str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	return (0);
}

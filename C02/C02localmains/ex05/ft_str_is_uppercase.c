/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:43:34 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/20 10:50:36 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65) && (str[i] <= 92)))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%i", ft_str_is_uppercase("GHHTsHY"));
	return (0);
}

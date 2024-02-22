/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:03:14 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/20 12:04:19 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s", ft_strupcase(argv[1]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:29:58 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/24 14:05:57 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if ((to_find[j] == str[i + j]) && (to_find[j] != '\0'))
			temp = &str[i];
		while ((to_find[j] == str[i + j]) && (to_find[j] != '\0'))
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (temp);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%s", ft_strstr("hola bebe", "bebe"));
	return (0);
}

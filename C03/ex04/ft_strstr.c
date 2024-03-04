/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:29:58 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/24 14:04:00 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	if (*to_find == '\0')
		return (str);
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

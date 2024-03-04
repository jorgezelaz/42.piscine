/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:56:45 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/26 10:02:44 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_negpos(char *str, int *sign, int *i)
{
	*sign = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			*sign = *sign * (-1);
		}
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	ft_negpos(str, &sign, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

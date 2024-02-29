/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:15:12 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/26 21:35:03 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_errorarg(int argc)
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
}

int	procfile(char *txt)
{
	int	i;

	i = 0;
	while ( txt[i] == '\0')
	{
		write(1, &txt[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_errorarg(&argc);
	i = 1;
	while (argv[i] != 0)
	{
		ft_procfile(argv[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:07:30 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/16 15:28:24 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	aux;

	cont = 0;
	while (cont < size / 2)
	{
		aux = tab[cont];
		tab[cont] = tab[size - 1 - cont];
		tab[(size - 1) - cont] = aux;
		cont++;
	}
}

int	main(void)
{
	int	leng;
	int	array[5];
	int i;

	leng = 5;
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	ft_rev_int_tab(array, leng);

	i = 0;
	while (i <= leng)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}

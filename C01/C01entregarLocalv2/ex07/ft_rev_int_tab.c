/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:07:30 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/16 09:58:01 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	aux;

	cont = 0;
	while (cont + 1 < (size / 2))
	{
		aux = tab[cont];
		tab[cont] = tab[size - 1 - cont];
		tab[(size - 1) - cont] = aux;
		cont++;
	}
}

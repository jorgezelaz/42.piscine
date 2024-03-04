/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:07:30 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/18 10:23:37 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

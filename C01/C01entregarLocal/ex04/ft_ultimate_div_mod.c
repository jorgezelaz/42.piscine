/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:05:02 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/14 16:50:41 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}
/*
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 11;
	n2 = 2;
	printf("si divido %d entre %d, ", n1, n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("da como resultado %d y como resto %d <3", n1, n2);
}

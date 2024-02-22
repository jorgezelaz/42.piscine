/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:25:08 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/14 15:45:27 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	resul;
	int	resto;

	a = 11;
	b = 2;
	ft_div_mod(a, b, &resul, &resto);
	printf("resultado division es %d\n y su resto es %d", resul, resto);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:58:35 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/14 15:22:57 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	va;
	int	vb;

	va = 1;
	vb = 2;
	printf("Valor de a original es %d y valor de b es %d\n", va, vb);
	ft_swap(&va, &vb);
	printf("Valor de a cambiado es %d y valor de b es %d\n", va, vb);
	return (0);
}

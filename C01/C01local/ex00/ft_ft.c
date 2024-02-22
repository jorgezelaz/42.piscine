/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:02:34 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/12 22:33:13 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // ESTO SOBRA TAMBIEN !!!!!!!!

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	a;

	ft_ft(&a);
	printf("%i \n", a);
	return (0);
}

Esta de arriba funciona porque usamos printf, y lo del parentesis pide que escriba en palabras el valor int 42, como que traduce un valor int un valor string.

Printf para texto(imprimir cadena) se usa así: printf("Hola Mundo\n"); 
PERO para  imprimir el valor de un int, printf("Resultado de la suma: %i \n",resultado);   donde resultado es la variable tipo int cuyo valor numérico se traduce a valor de texto usando %i\ n PERO si quisieramos imprimir en texto varios valores numéricos, habria que separar con comas como en el ejemplo siguiente: 


#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 20;
    int resultado = num1 + num2;

    // Imprimir el resultado de la suma junto con otros valores
    printf("El primer número es %i, el segundo es %i y el resultado de la suma es %i.\n", num1, num2, resultado);

    return 0;
}

Esta es la que no funciona porque no acepta write un valor numérico para imprimirlo:

int	main(void)
{
	char	a;
	ft_ft(&a);
	write(1, &a, 2000);
	return (0);
}

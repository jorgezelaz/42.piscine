/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:48:06 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/13 18:59:32 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> /////// BORRAR ESTO PARA ENTRENGAR

void	ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}


///// SOLO SE ENTREGA LO DE ARRIBA ^

int main(void) 
{
	int a;
	int	*nbr = &a;
	int	**nbr_1 = &nbr;
	int	***nbr_2 = &nbr_1;
	int	****nbr_3 = &nbr_2;
	int	*****nbr_4 = &nbr_3;
	int	******nbr_5 = &nbr_4;
	int	*******nbr_6 = &nbr_5;
	int	********nbr_7 = &nbr_6;
	int	*********nbr_8 = &nbr_7;
	int	**********nbr_9 = &nbr_8;
	
	ft_ultimate_ft(nbr_9);
    printf("%i\n",&a);
    return	(0);
}


/////////////////////////////////////

#include <stdio.h>

void	ft_ultimate_ft(int *nbr)
{
	*nbr = 42;
}

int main(void) 
{
	int a;
	int	*nbr;
	*nbr = &a;

	/*nbr = numero hexadecimal de la ruta a la casilla de memeoria asignada a nbr, que si despues hacemos *nbr = &[variable por asignar], me estan enlazando el valor que metamos despues en *nbr a el valor de la variable por asignar.*/

	ft_ultimate_ft(nbr);
    printf("%i\n",&a);
    return	(0);
}



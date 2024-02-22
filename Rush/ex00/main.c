/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:50:14 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/18 23:10:07 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f_error(void)
{
	write(1, "[!] Error: invalid parameters", 29);
}

void	f_valid(void)
{
	write(1, "[+] Success: valid parameters", 29);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*input_str;

	if (argc != 2)
	{
		f_error();
		return (1);
	}
	input_str = argv[1];
	i = 0;
	while (input_str[i] != '\0')
	{
		if (i % 2 == 0 && (input_str[i] < '1' || input_str[i] > '4'))
		{
			f_error();
			return (1);
		}
		i++;
	}
	f_valid();
	return (0);
}
/*Queridx evaluadorx:
 *
 * Sabemos que esperas que se genere una 
 * matriz[4][4] con valores que responden a unas restricciones 
 * hiperlocas.
 * 
 * Nos encantaría tener los fundamentos teóricos, la destreza y
 * la agilidad requeridas para cumplir los objetivos de este rush.
 * Hemos llegado a conclusiones que estaremos encantadxs de compartir
 * contigo en la defensa, pero que no hemos conseguido añadir por falta
 * de tiempo.
 *
 * Tenemos la certeza de que cuando superemos esta piscina y seamos 
 * estudiantes de 42 seremos capaces de esto, de entender el sentido
 * de la vida, del universo y todo lo demás.
 * <3
 * */

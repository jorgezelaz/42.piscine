/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:36:36 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/26 09:54:40 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

funcionv valdaciones
return 1 si es iok y return 0

int	ft_valid(char *base)
{
	int	i;

	while (*base)
	{
		if (base[0] == '\0' || base[1] == '\0')
			return (0);
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
}



	
void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_valid(int nbr, *base) == 1)
		write(1, "Error\n", 6);

}

int	main(void)
{
}

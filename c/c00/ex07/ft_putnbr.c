/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:31:44 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/07 16:23:57 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	aux;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb < 10)
		{
			aux = nb + 48;
			ft_putchar(aux);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			aux = nb % 10 + 48;
			ft_putchar(aux);
		}
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/

//number -2.147.483.648 to 0 to 2.147.483.647
//negative go positive adding - with write function
//numbers < 10 go +48 for the 0 in the ASCII table
//numbers > 10 go /10 for taking the rest with %10 (+48 too same last reason)

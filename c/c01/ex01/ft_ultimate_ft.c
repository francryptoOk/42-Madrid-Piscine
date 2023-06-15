/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:59:36 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/11 15:53:52 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int	main(void)
{
	int	p = 0;
	int	*p1 = &p;
	int	**p2 = &p1;
	int	***p3 = &p2;
	int	****p4 = &p3;
	int	*****p5 = &p4;
	int	******p6 = &p5;
	int	*******p7 = &p6;
	int	********p8 = &p7;
	int	*********p9 = &p8;
	int	decena;
	int	unidad;

	p = p + 48;
	write(1, &p, 1);
	write(1, "\n", 1);
	ft_ultimate_ft(p9);
	decena = ((*********p9 / 10) % 10) + 48;
	unidad = (*********p9 % 10) + 48;
	write(1, &decena, 1);
	write(1, &unidad, 1);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:24:32 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/11 19:10:05 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

/*int	main(void)
{
	int	a1;
	int	b1;

	a1 = 10;
	b1 = 5;
	ft_ultimate_div_mod(&a1, &b1);
	a1 = a1 + 48;
	b1 = b1 + 48;
	write(1, &a1, 1);
	write(1, &b1, 1);
	return (0);
}*/

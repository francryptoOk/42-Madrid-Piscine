/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:11:21 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/11 16:32:14 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	valor1;
	int	valor2;

	valor1 = 1 + 48;
	valor2 = 2 + 48;
	write(1, &valor1, 1);
	write(1, &valor2, 1);
	write(1, "\n", 1);
	ft_swap(&valor1, &valor2);
	write(1, &valor1, 1);
	write(1, &valor2, 1);
	return (0);
}*/

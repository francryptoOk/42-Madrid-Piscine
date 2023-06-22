/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:59:46 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/22 15:25:00 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	num;
	int	pow;
	
	num = 6;
	pow = 3;
	printf("%d\n", ft_iterative_power(num, pow));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:43:11 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/22 14:59:32 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	num;
	
	num = 6;
	printf("%d\n", ft_recursive_factorial(num));
	return (0);
}*/

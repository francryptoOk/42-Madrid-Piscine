/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:25:58 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/22 16:07:51 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(void)
{
	int	num;
	
	num = 6;
	printf("%d\n", ft_fibonacci(num));
	return (0);
}*/

// fibonacci positions for 6 = 0, 1, 1, 2, 3, 5
// fibonacci of 6 = 8 (positions 5rd + 6rd)

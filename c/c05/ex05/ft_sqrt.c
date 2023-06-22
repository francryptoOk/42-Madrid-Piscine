/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:15:28 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/22 16:36:11 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_sqrt(int nb)
{
	float	num;
	int		res;

	num = nb;
	if (num < 0)
		return (0);
	while (num * num - nb > 0.5)
	{
		num = (num + nb / num) / 2;
	}
	res = (int) num;
	if (res * res == nb)
		return (res);
	return (0);
}

/*int	main(void)
{
	int n;

	n = 81;
	printf("%d\n", ft_sqrt(n));
}*/

//newton-raphson method
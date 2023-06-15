/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:34:09 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/11 17:17:14 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	y;
	int	z;
	int	resdiv;
	int	resmod;

	y = 12;
	z = 5;
	ft_div_mod(y, z, &resdiv, &resmod);
	resdiv = resdiv + 48;
	resmod = resmod + 48;
	write(1, &resdiv, 1);
	write(1, &resmod, 1);
	return (0);
}*/

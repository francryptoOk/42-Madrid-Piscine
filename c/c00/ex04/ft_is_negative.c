/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_is_negative.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:07:59 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/13 00:48:38 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
		write (1, &negative, 1);
	else
		write (1, &positive, 1);
}

/*int	main(void)
{
	int	n;

	n = 0;
	ft_is_negative(n);
	return (0);
}*/

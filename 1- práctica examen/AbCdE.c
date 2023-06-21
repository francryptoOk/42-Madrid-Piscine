/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbCdE.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:59:42 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/21 14:18:07 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putcharmayusc(char c)
{
	c -= 32;
	write(1, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	start;

	start = 'a';
	while (start <= 'z')
	{
		if (start % 2 == 0)
		{
			ft_putchar(start);
		}
		else
		{
			ft_putcharmayusc(start);
		}
		start++;
	}
	return (0);
}

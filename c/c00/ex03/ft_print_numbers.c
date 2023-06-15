/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_print_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:06:27 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/06 16:07:13 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	start;
	int	end;

	start = '0';
	end = '9';
	while (start <= end)
	{
		write (1, &start, 1);
		start++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

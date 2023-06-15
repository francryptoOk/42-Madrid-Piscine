/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_print_alphabet.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:01:30 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/06 16:02:36 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	start;
	int	end;

	start = 'a';
	end = 'z';
	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

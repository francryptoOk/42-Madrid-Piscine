/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:09 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/12 18:09:15 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swap;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab[end];
		tab[end] = tab [start];
		tab[start] = swap;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	tab[4];
	int	size;

	tab[0] = 5;
	tab[1] = 8;
	tab[2] = 0;
	tab[3] = 1;
	size = 4;
	ft_rev_int_tab(tab, size);
	ft_putchar(tab[0]);
	ft_putchar(tab[1]);
	ft_putchar(tab[2]);
	ft_putchar(tab[3]);
	return (0);
}*/

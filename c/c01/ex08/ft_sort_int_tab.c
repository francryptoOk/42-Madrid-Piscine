/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:09:05 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/12 21:48:07 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux1;
	int	aux2;
	int	swap;

	aux1 = 0;
	while (aux1 < size)
	{
		aux2 = aux1 + 1;
		while (aux2 < size)
		{
			if (tab[aux1] > tab[aux2])
			{
				swap = tab[aux2];
				tab[aux2] = tab[aux1];
				tab[aux1] = swap;
			}
			aux2++;
		}
		aux1++;
	}
}

/*int	main(void)
{
	int	tab[4];
	int	size;

	tab[0] = 2;
	tab[1] = 3;
	tab[2] = 1;
	tab[3] = 0;
	size = 4;
	ft_sort_int_tab(tab, size);
	ft_putchar(tab[0]);
	ft_putchar(tab[1]);
	ft_putchar(tab[2]);
	ft_putchar(tab[3]);
	return (0);
}*/

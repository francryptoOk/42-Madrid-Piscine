/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:09:14 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/04 20:51:24 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 0;
	v = 0;
	while (v < y)
	{
		while (h < x)
		{
			if (v == 0 && h == 0)
				ft_putchar('/');
			else if ((h == x -1 && v == 0) || (h == 0 && v == y -1))
				ft_putchar('\\');
			else if (h > 0 && v > 0 && v == y -1 && h == x -1)
				ft_putchar('/');
			else if ((v > 0 && v < y -1) && (h > 0 && h < x -1))
				ft_putchar(' ');
			else
				ft_putchar('*');
		h++;
		}
		ft_putchar('\n');
		h = 0;
		v++;
	}
}

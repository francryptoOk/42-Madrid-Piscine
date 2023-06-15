/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:49:10 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/12 20:39:08 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_int_to_char(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = (a / 10) % 10 + '0';
	a2 = a % 10 + 48;
	b1 = (b / 10) % 10 + 48;
	b2 = b % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_int_to_char(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		b = b + 1;
		}
	a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

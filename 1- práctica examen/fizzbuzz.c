/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:36:31 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/22 18:58:20 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_int_to_char(char c)
{
	c = c + 48;
	write (1, &c, 1);
}

void	ft_digits(int num)
{
	int	nizq;
	int	nder;

	nizq = (num / 10) % 10;
	nder = num % 10;
	if (num % 3 == 0 && num % 5 == 0)
		write (1, "fizzbuzz", 8);
	else if (num % 3 == 0)
		write (1, "fizz", 4);
	else if (num % 5 == 0)
		write (1, "buzz", 4);
	else
	{
		if (num >= 10)
			ft_put_int_to_char (nizq);
		ft_put_int_to_char (nder);
	}
	write (1, "\n", 1);
}

int	main(void)
{
	int	num;

	num = 1;
	while (num <= 100)
	{
		ft_digits(num);
		num++;
	}
	return (0);
}

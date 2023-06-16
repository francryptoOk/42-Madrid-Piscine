/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:49:09 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/16 14:51:14 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc,	char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write (1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 2);
	return (0);
}
/* se prueba con:
 * ./aff_a "abc" | cat -e
 * a$
 * ./aff_a "dubO a POIL" | cat -e
 * a$
 * ./aff_a "zz sent le poney" | cat -e
 * $
 * ./aff_a | cat -e
 * a$

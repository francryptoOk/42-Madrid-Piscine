/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:47:30 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/21 18:49:38 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	o;
	int	i;

	o = argc - 1;
	if (argc > 1)
	{
		while (o >= 1)
		{
			i = 0;
			while (argv[o][i] != '\0')
				i++;
			write (1, argv[o], i);
			write (1, "\n", 1);
				o--;
		}
	}
	return (0);
}

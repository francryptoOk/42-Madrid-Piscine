/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:15:19 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/11 19:30:20 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		write(1, &str[aux], 1);
		aux++;
	}
}

/*int	main(void)
{
	char	*string = "Miauuuu";
	ft_putstr(string);
	return (0);
}*/

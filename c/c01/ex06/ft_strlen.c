/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:54:07 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/12 20:19:07 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux++;
	}
	return (aux);
}

/*int	main(void)
{
	char	*str  = "hola";
	int	back;

	back = ft_strlen(str) + 48;
	write(1, &back, 1);
	return (0);
}*/

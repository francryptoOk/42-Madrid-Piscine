/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:30:00 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/14 16:34:14 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[2] = "mi";
	char	dest[5] = "guauu";
	unsigned int	n = 8;

	ft_putstr(dest);
	write(1, "\n", 1);
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	return (0);
}*/

// Recordar que strNcpy reemplaza la longitud del origen en el destino
// por ende el destino debe ser más extenso (podría poner un origen <= destino)

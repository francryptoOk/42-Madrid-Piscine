/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:50:59 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/18 20:08:13 by fsantill         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[length] != '\0' && length < (size - 1))
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (i);
}

/*int	main(void)
{
	char	src[8] = "mihhgtrd";
	char	dest[5] = "guauu";
	unsigned int	size = 5;

	ft_putstr(dest);
	write(1, "\n", 1);
	ft_strlcpy(dest, src, size);
	return (0);
}*/

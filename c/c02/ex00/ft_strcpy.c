/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 00:52:07 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/13 10:36:08 by fsantill         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[4] = "guau";
	char	src[6] = "miauuu";

	//src[0] = "h";
	//src[1] = "e";
	//src[2] = "y";
	//dest[0] = "m";
	//dest[1] = "i";
	//dest[2] = "a";
	//dest[3] = "u";
	ft_putstr(src);
	ft_putstr(dest);
	ft_strcpy(dest, src);
	write(1, "\n", 1);
	ft_putstr(src);
	ft_putstr(dest);
	return (0);
}*/

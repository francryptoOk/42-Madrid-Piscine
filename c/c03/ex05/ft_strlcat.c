/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:34:26 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/20 11:51:34 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_runstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	ori_dest_length;

	ori_dest_length = ft_runstr(dest);
	dest_length = ori_dest_length;
	src_length = ft_runstr(src);
	i = 0;
	if (size == 0)
		return (src_length);
	if (dest_length > size)
		return (src_length + size);
	while (src[i] != '\0' && dest_length < (size - 1))
	{
		dest[dest_length] = src[i];
		i++;
		dest_length++;
	}
	dest[dest_length] = 0;
	return (src_length + ori_dest_length);
}

/*int	main(void)
{
	char	src[] = "cachetada";
	char	dest[] = "hola, ¿qué tal?";
	unsigned int n = 5;
	printf("%u\n", ft_strlcat(dest, src, n));
}*/

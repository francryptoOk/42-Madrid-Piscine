/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:13:48 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/14 19:34:02 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable("ABCDEF"));
	printf("%d\n", ft_str_is_printable("123456"));
	printf("%d\n", ft_str_is_printable("abcdef"));
	printf("%d\n", ft_str_is_printable("\t\n"));
	printf("%d\n", ft_str_is_printable(""));
}*/

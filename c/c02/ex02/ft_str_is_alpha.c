/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:37:08 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/14 17:26:01 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
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
	printf("%d\n", ft_str_is_alpha("abcdfg"));
	printf("%d\n", ft_str_is_alpha("123456"));
	printf("%d\n", ft_str_is_alpha(""));
}*/

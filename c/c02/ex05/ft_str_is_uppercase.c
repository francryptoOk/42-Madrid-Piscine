/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:08:17 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/14 18:09:29 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("%d\n", ft_str_is_uppercase("ABCDEF"));
	printf("%d\n", ft_str_is_uppercase("123456"));
	printf("%d\n", ft_str_is_uppercase("abcdef"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/

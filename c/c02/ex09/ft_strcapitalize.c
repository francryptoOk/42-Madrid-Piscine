/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:12:39 by fsantill          #+#    #+#             */
/*   Updated: 2023/06/19 12:58:36 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_str_all_to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_str_all_to_lowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] >= 0 && str[i - 1] <= 47)
				str[i] -= 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] -= 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] -= 32;
			else if (str[i - 1] >= 123 && str[i - 1] <= 127)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "salut SALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
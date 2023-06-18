/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:40:42 by lpastor-          #+#    #+#             */
/*   Updated: 2023/06/18 18:35:40 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_math.h"
#include "utilities.h"

long long	rd_atoi(char *str)
{
	long long	count;
	int			index;

	count = 0;
	index = 0;
	while (check_isspace(str[index]) == 1)
		index++;
	if (str[index] == '-' || str[index] == '+')
		return (-1);
	if (str[index] < '0' || str[index] > '9')
		return (-1);
	while (str[index] >= '0' && str[index] <= '9')
	{
		count = (count * 10) + (str[index] - '0');
		index++;
	}
	if (str[index] == '.' || str[index] == ',')
		return (-1);
	return (count);
}

char	*ft_itoa(long long number)
{
	char	*text;
	int		index;

	index = 0;
	index = get_nmb_length(number);
	text = (char *) malloc((index + 1) * sizeof(char));
	if (!text)
		return (NULL);
	text[index] = '\0';
	if (number == 0)
	{
		text[0] = '0';
		return (text);
	}
	index--;
	while (number > 0)
	{
		text[index] = (number % 10) + '0';
		number /= 10;
		index--;
	}
	return (text);
}

int	get_nmb_length(long long number)
{
	int	length;

	length = 0;
	if (number == 0)
		return (1);
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*delimit_string(char *str, char sep)
{
	int		index;
	int		start;
	char	*key;

	index = 0;
	while (str[index] == ' ' || str[index] == ':')
		index++;
	start = index;
	while (str[index] != sep)
		index++;
	key = (char *) malloc((index - start + 1) * sizeof(char));
	if (!key)
		return (NULL);
	index = 0;
	while (str[start] != '\n')
	{
		key[index] = str[start];
		index++;
		start++;
	}
	key[index] = '\0';
	return (key);
}

char	*search_number(char *str, char *number)
{
	int	index;
	int	compr;

	compr = 0;
	index = 0;
	while (str[index] == number[index])
		index++;
	if (str[index] == ':' || str[index] == ' ')
		return (delimit_string(&str[index + 1], '\n'));
	while (str[index] != '\0')
	{
		if (str[index] != number[compr])
			compr = 0;
		if (str[index] == number[compr])
			compr++;
		if ((str[index + 1] == ' ' || str[index + 1] == ':'))
		{
			if (str[index - compr] == '\n' && number[compr] == '\0')
				return (delimit_string(&str[index + 1], '\n'));
		}
		index++;
	}
	return (NULL);
}

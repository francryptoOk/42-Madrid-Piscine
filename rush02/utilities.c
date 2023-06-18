/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:10:49 by lpastor-          #+#    #+#             */
/*   Updated: 2023/06/18 19:23:16 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_math.h"
#include "utilities.h"

void	reverse_array(long long *array, int tam)
{
	int	start;
	int	end;
	int	aux;

	start = 0;
	end = tam - 1;
	while (start < end)
	{
		aux = array[start];
		array[start] = array[end];
		array[end] = aux;
		start++;
		end--;
	}
}

long long	ft_pow(long long number, int power)
{
	int			index;
	long long	res;

	res = 1;
	index = 0;
	while (index < power)
	{
		res *= number;
		index++;
	}
	return (res);
}

void	print_string(char *text)
{
	int	index;

	index = 0;
	while (text[index] != '\0')
	{
		write(1, &text[index], 1);
		index++;
	}
}

int	check_isspace(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\v')
		return (1);
	if (ch == '\n' || ch == '\r' || ch == '\f')
		return (1);
	return (0);
}

void	pnt_fnine(char *dict, long long number)
{
	char	*text;
	char	*aux;

	if (number != 0)
	{
		aux = ft_itoa(number);
		text = search_number(dict, aux);
		print_string(text);
		free(text);
		free(aux);
	}
}

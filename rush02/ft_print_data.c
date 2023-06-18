/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:47:10 by lpastor-          #+#    #+#             */
/*   Updated: 2023/06/18 19:23:37 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_print_data.h"
#include "ft_math.h"
#include "utilities.h"

void	print_hundred_splc(long long number, char *dict)
{
	char	*text;
	char	*aux;

	if (number <= 20)
	{
		aux = ft_itoa(number);
		text = search_number(dict, aux);
		print_string(text);
		free(text);
		free(aux);
	}
	else if (number != 0)
	{
		aux = ft_itoa(((number % 100) / 10) * 10);
		text = search_number(dict, aux);
		print_string(text);
		free(text);
		free(aux);
		if (number % 10 != 0)
			write(1, " ", 1);
		print_hundred(dict, number % 10);
	}
}

void	print_hundred(char *dict, long long number)
{
	int		count;
	char	*text;
	char	*aux;

	count = get_nmb_length(number);
	if (count == 3)
	{
		aux = ft_itoa(number / 100);
		text = search_number(dict, aux);
		print_string(text);
		free(text);
		free(aux);
		write(1, " hundred", 9);
		if (number % 100 != 0)
			write(1, " ", 1);
		print_hundred(dict, (number % 100));
	}
	if (count == 2)
		return (print_hundred_splc(number, dict));
	if (count == 1)
		return (pnt_fnine(dict, number));
}

void	print_thousand(char *dict, long long number)
{
	print_hundred(dict, number / 1000);
	write(1, " thousand", 9);
	if (number % 1000 != 0)
		write(1, " ", 1);
	print_hundred(dict, number % 1000);
}

void	print_million(char *dict, long long number)
{
	print_hundred(dict, number / 1000000);
	write(1, " million", 8);
	if ((number % 1000000 / 1000) != 0 || (number % 1000000 % 1000) != 0)
	{
		write(1, " ", 1);
		print_thousand(dict, (number % 1000000));
	}
}

void	print_billion(char *dict, long long number)
{
	print_hundred(dict, number / 1000000000);
	write(1, " billion", 8);
	if ((number % 1000000000 / 1000000) != 0
		|| (number % 1000000000 % 1000000) != 0)
	{
		write(1, " ", 1);
		print_million(dict, (number % 1000000000));
	}
}

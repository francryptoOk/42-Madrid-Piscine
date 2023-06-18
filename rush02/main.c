/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:07:36 by lpastor-          #+#    #+#             */
/*   Updated: 2023/06/18 18:54:52 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include "ft_math.h"
#include "ft_print_data.h"
#include "utilities.h"

void	print_number(char *dict, long long number)
{
	int		count;
	char	*text;

	if (number == 0)
	{
		text = search_number(dict, "0");
		print_string(text);
		free(text);
		return ;
	}
	count = get_nmb_length(number);
	if (count > 9)
		print_billion(dict, number);
	else if (count > 6)
		print_million(dict, number);
	else if (count > 3)
		print_thousand(dict, number);
	else
		print_hundred(dict, number);
}

char	*get_dict(char *filename)
{
	char	*dict;
	int		file;
	int		length;
	char	ch;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (NULL);
	length = 0;
	while (read(file, &ch, 1) != 0)
		length++;
	close(file);
	dict = (char *) malloc((length + 1) * sizeof(char));
	if (!dict)
		return (NULL);
	file = open(filename, O_RDONLY);
	read(file, dict, length);
	close(file);
	dict[length] = '\0';
	return (dict);
}

char	*read_argv(int argc, char *argv[], long long *number)
{
	char	*dict;

	(*number) = 0;
	if (argc < 2 || argc > 3)
		return (NULL);
	(*number) = -2;
	if (argc == 3)
		dict = get_dict(argv[1]);
	else
		dict = get_dict("numbers.dict");
	if (!dict)
		return (NULL);
	(*number) = rd_atoi(argv[argc - 1]);
	if ((*number) == -1)
	{
		free(dict);
		return (NULL);
	}
	return (dict);
}

int	main(int argc, char *argv[])
{
	char		*dict;
	long long	long_number;

	dict = read_argv(argc, argv, &long_number);
	if (!dict)
	{
		if (long_number == 0 || long_number == -1)
			write(1, "Error\n", 6);
		if (long_number == -2)
			write(1, "Dict Error\n", 11);
		return (1);
	}
	print_number(dict, long_number);
	write(1, "\n", 1);
	free(dict);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:05:31 by lpastor-          #+#    #+#             */
/*   Updated: 2023/06/18 18:06:59 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

long long	rd_atoi(char *str);
char		*ft_itoa(long long number);
int			get_nmb_length(long long number);
char		*delimit_string(char *str, char sep);
char		*search_number(char *str, char *number);

#endif

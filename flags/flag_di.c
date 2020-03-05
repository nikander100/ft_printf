/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flag_di.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 21:18:57 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"

char	*flag_di(signed int value)
{
	char *str;

	if (value < 0)
		value *= -1;
	str = ft_itoa(value);
	return (str);
}

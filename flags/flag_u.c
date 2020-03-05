/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flag_u.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 13:46:15 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"

char	*flag_u(unsigned int value)
{
	char *str;

	str = ft_itoa_unsigned(value);
	return (str);
}

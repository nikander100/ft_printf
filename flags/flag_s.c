/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flag_s.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 20:00:11 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"
#include "../hdrs/ft_printf.h"

char	*flag_s(char *str, struct s_info info)
{
	char *result;

	if (info.print == e_true)
		result = ft_strdup(str);
	else
		result = ft_strdup("");
	return (result);
}

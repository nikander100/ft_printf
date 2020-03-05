/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_negative.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/02 17:27:48 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/30 17:09:08 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"

struct s_info	handle_negative(struct s_info info)
{
	if (info.negative_flag == e_true)
	{
		info = ft_putchar_fd(1, '-', info);
		info.amount += 1;
	}
	return (info);
}

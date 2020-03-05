/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   in_flag_set.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 15:36:17 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/30 17:08:55 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"

t_bool	in_flag_set(char c)
{
	int		i;
	char	*set;

	set = "-0.*";
	i = 0;
	while (i <= 4)
	{
		if (c == set[i])
			return (e_true);
		i++;
	}
	return (e_false);
}

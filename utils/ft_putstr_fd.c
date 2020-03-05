/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 19:17:52 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"

struct s_info	ft_putstr_fd(int fd, char *str, int n, struct s_info info)
{
	int i;

	i = 0;
	while (str[i] && i < n)
	{
		info = ft_putchar_fd(fd, str[i], info);
		i++;
	}
	return (info);
}

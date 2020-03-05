/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 19:17:00 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/30 17:08:16 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"
#include <unistd.h>

struct s_info	ft_putchar_fd(int fd, char c, struct s_info info)
{
	ssize_t i;

	i = write(fd, &c, sizeof(char));
	if (i < 0)
		info.error = e_true;
	return (info);
}

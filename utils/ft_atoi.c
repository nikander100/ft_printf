/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:08:31 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int	skip(const char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\b' || str[i] == ' ' || str[i] == '\v'
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long			res;

	res = 0;
	i = skip(str, 0);
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res >= 922337203685477580)
		{
			if ((sign == -1 && str[i] >= '9') || (sign == 1 && str[i] >= '8'))
				return ((sign == -1) ? 0 : -1);
			res = (res * 10) + (str[i] - '0');
			return ((int)res * sign);
		}
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return ((int)res * sign);
}

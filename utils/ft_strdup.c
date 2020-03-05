/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 15:40:18 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		size;
	int		counter;
	char	*dup;

	size = 0;
	counter = 0;
	size = ft_strlen(s1);
	dup = malloc(sizeof(char) * size + 1);
	if (dup == NULL)
		return (NULL);
	while (counter < size)
	{
		dup[counter] = s1[counter];
		counter++;
	}
	dup[counter] = '\0';
	return (dup);
}

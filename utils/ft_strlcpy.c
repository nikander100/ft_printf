/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:13:08 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*tdst;
	char		*tend;
	const char	*tsrc;

	tdst = dst;
	tend = dst + dstsize;
	tsrc = src;
	if (src == NULL)
		return (0);
	while (*tsrc != '\0' && tdst < tend)
	{
		*tdst = *tsrc;
		tdst++;
		tsrc++;
	}
	if (tdst < tend)
		*tdst = 0;
	else if (dstsize > 0)
		tdst[-1] = 0;
	while (*tsrc != '\0')
		tsrc++;
	return (tsrc - src);
}

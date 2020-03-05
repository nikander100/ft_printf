/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 18:29:28 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstl;
	size_t srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (!dstsize || dstsize < dstl)
		return (dstl + srcl - (dstl - dstsize));
	dstsize -= dstl;
	ft_strlcpy(dst + dstl, src, dstsize);
	return (dstl + srcl);
}

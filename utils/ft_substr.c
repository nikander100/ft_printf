/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 17:47:19 by nvan-der       #+#    #+#                */
/*   Updated: 2020/01/17 16:46:35 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/utils.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*result;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}

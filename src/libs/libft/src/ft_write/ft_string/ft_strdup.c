/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:56:13 by lrocigno          #+#    #+#             */
/*   Updated: 2021/07/04 21:07:21 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_string.h>

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		str_size;

	str_size = ft_strlen(str);
	ret = malloc((str_size + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, str, str_size + 1);
	return (ret);
}

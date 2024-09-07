/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_error_is_first_def.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 17:33:36 by lrocigno          #+#    #+#             */
/*   Updated: 2021/06/21 12:35:14 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifies if the property membe have some data already.
** Receives an address and the property name. Case the address have some value,-
**  the function will emit a error message and sinalize the program to stop.
** The verification is done by looking to the first byte of the given address.
*/

#include "cub3d_error.h"

bool	is_first_def(void *data, const char *p_name, int ruler)
{
	char	*holder;

	holder = (char *)data;
	if (holder)
	{
		if (holder[0] != ruler)
		{
			error_msg("Double definition for property", p_name);
			return (false);
		}
	}
	return (true);
}

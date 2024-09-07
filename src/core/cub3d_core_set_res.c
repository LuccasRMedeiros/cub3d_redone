/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_core_set_res.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 14:55:23 by lrocigno          #+#    #+#             */
/*   Updated: 2021/07/23 22:23:28 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_core.h"

/*
** Receive a line containing info about window resolution, check if it is all  -
** right, the sets the proper values for further configuration.
** Does not return data, it will process all the information into a given t_cub-
**  address.
*/

void	set_res(const char *line, t_cub *cub)
{
	char	**res;

	res = ft_split(line + 1, ' ');
	if (!is_first_def((void *)cub->res, "Window resolution", 0)
		|| !validate_res(res))
	{
		cub->status = -1;
		ft_destroyer((void **)res);
		return ;
	}
	cub->res[WDT] = ft_atoi(res[0]);
	cub->res[HGT] = ft_atoi(res[1]);
	ft_destroyer((void **)res);
}

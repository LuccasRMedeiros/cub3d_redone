/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_structs_new_ray.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 22:14:26 by lrocigno          #+#    #+#             */
/*   Updated: 2021/07/23 19:29:35 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_structs.h"

/*
** Create a new ray from a start point looking to a certain direction.
** The casting is done by ray_cast function (see cub3d_draw header), here the  -
** values are merely initialized.
*/

t_ray	new_ray(char id, double ang)
{
	t_ray	new;

	new.id = id;
	new.ang = ang;
	new.dirs[UPDN] = 0;
	new.dirs[LTRT] = 0;
	if (ang > WEST)
		new.dirs[UPDN] = 1;
	if (ang > SOUTH && ang < NORTH)
		new.dirs[LTRT] = 1;
	new.xo = 0;
	new.yo = 0;
	new.rx = 0;
	new.ry = 0;
	new.map_x = 0;
	new.map_y = 0;
	new.dist = INT_MAX;
	return (new);
}

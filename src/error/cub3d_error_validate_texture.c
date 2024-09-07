/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_error_validate_texture.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:48:48 by lrocigno          #+#    #+#             */
/*   Updated: 2021/07/26 22:00:12 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_error.h"

/*
** Check for a invalid texture.
** Receives a file path and will try to open it, then will verify its extension.
** Invalid texture can be:
**  - Non existent file;
**  - File in any format that isn't .bmp;
** Case one of the above situations been verified, the function prints an error-
**  message and then returns true to sinalize the program to stop.
*/

bool	validate_texture(char *path, char *where)
{
	int		fd;
	char	*error;
	size_t	ext_pos;

	fd = open(path, O_RDONLY);
	error = NULL;
	if (fd == -1)
	{
		error = ft_strcomb(3, "file: ", path, " was not found.");
		error_msg(error, where);
		free(error);
		error = NULL;
		return (false);
	}
	close(fd);
	ext_pos = ft_strlen(path) - 4;
	if (ft_strncmp(path + ext_pos, ".xpm", 4) != 0)
	{
		error = ft_strcomb(3, "file: ", path, " have invalid format.");
		error_msg(error, where);
		free(error);
		error = NULL;
		return (false);
	}
	return (true);
}

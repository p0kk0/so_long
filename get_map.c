/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:42:27 by felsanch          #+#    #+#             */
/*   Updated: 2023/11/04 19:46:14 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_map_conditions(char **matrix_map)
{
	   
}

char	*ft_get_map(char **map)
{
	char	*endmap;
	ssize_t	fd;
	char	*line;
	char	*line_map;
	char	**matrix_map;
	char	*valid_map;

	endmap = ((ft_strchr(map, '\0')) - 4);
	if (!strncmp(map, "/maps", 5) || !strncmp(endmap, ".ber", 4))
		return ("Error, invalid arguments.", 0);
	fd = open (map, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		line_map = ft_strjoin(line_map, line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	matrix_map = (line_map, '\n');
	valid_map = ft_map_conditions(matrix_map);
	if (!valid_map)
		return ("Wrong map.", 0);
	else
		return (valid_map);
}

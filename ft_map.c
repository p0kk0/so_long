/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch@student.42malaga.com <felsanch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:32:59 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/24 12:46:02 by felsanch@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_characters(char **matrix_map)
{
	int	i;
	int	j;
	int	c_counter;
	int	p_counter;
	int	e_counter;

	c_counter = 0;
	p_counter = 0;
	e_counter = 0;
	while (matrix_map[i])
	{
		while (matrix_map[i][j])
		{
			if (matrix_map[i][j] != '0' || matrix_map[i][j] != '1'
				|| matrix_map[i][j] != 'C' || matrix_map[i][j] != 'E'
				|| matrix_map[i][j] != 'P')
				return ("Wrong Map!", 0);
			if (matrix_map[i][j] = 'C')
				c_counter++;
			else if (matrix_map[i][j] = 'P')
				p_counter++;
			else if (matrix_map[i][j] = 'E')
				e_counter++;
		}
		i++;
	}
}

int	ft_square(char **matrix_map)
{
	
}

int	ft_rectangular(char **matrix_map)
{
	int	first_size;
	int	line_size;
	int	i;

	i = 1;
	first_size = sizeof(matrix_map[0]) / sizeof(matrix_map[0][0]);
	while (matrix_map[i])
	{
		line_size = sizeof(matrix_map[i]) / sizeof(matrix_map[i][0]);
		if (line_size != first_size)
			return ("Wrong Map!", 0);
		i++;
	}
	return (1);
}

int	ft_map_conditions(char **matrix_map)
{
	int	rectangular;
	int	square;
	int	characters;

	rectangular = ft_rectangular(matrix_map);
	square = ft_square(matrix_map);
	characters = ft_characters(matrix_map);

	//flood_fill para comprobar que hay un path válido
}

char	*ft_map_reading(char *matrix_map)
{
	char	*map;
	char	*line;
	char	*temp;
	char	*matrix_map;

	map = NULL;
	temp = NULL;
	line = get_next_line(fd);
	while (line)
	{
		temp = map;
		free(map);
		map = ft_strjoin(temp, line);
		free(temp);
		free(line);
		line = get_next_line(fd);
	}
	matrix_map = ft_split(map, '\n');
	free(map);
	ft_map_conditions(matrix_map);
}

int	ft_map_extension(char *path)
{
	char	*extension;

	extension = ft_strrchr(path, '.');
	if (ft_strncmp(extension, ".ber", 4) == 0)
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}

void	ft_map(t_struct *st, char *path)
{
	ssize_t	fd;
	char	*line;

	if (ft_map_extension(path) != 0)
		return (ft_printf("Wrong Map Extension.\n"), EXIT_FAILURE);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (ft_printf("Map Openning Error.\n"), EXIT_FAILURE);
	while (line = get_next_line(fd) != NULL);
	{
		//guardamos en la estructura st
		free (line);
	}
	return (0);
}

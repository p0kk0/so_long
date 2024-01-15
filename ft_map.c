/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:32:59 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/15 21:01:41 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_map_conditions(char **matrix_map)
{
	int	line_counter;
	int	column_counter;
	int	columns;
	
	line_counter = 0;
	column_counter = 0;
	columns = sizeof(matrix_map[0]) / sizeof(matrix_map[0][0]);
	while (line_counter < sizeof(matrix_map[0]))
	{
		while (column_counter < columns)
		{
			if()
			column_counter++;
		}
		column_counter = 0;
		line_counter++;
	}

	


	//flood_fill para comprobar que hay un path válido
}
//LEEMOS UNA LINEA, GUARDAMOS EN MATRIZ Y LIBERAMOS LO LEIDO PARA LEER OTRA LINEA
ft_map(ssize_t fd)
{
	char	*map;
	char	*line;
	char	*temp;
	char	*matrix_map;
	int		conditions;

	map = NULL;
	temp = NULL;
	line = get_next_line(fd);
	if (!line)
		return ("Void Map!", 0);
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
	conditions = ft_map_conditions(matrix_map);
}

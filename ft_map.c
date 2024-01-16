/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch@student.42malaga.com <felsanch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:32:59 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/16 12:44:51 by felsanch@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_characters(char **matrix_map)
{
	
}

int	ft_square(char **matrix_map)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (matrix_map[0])
	{
		if (matrix_map[0][j] != '1')
			return ("Wrong Map!", 0);
		j++;
	}
	j = 0;
	while (matrix_map)
	{
		matrix_map[i++];
	}

}

int	ft_rectangular(char **matrix_map)
{
	int	first_size;
	int	line_size;
	int	i;

	i = 1;
	first_size = sizeof(matrix_map[0]) / sizeof(matrix_map[0][0]);
	while (matrix_map[i]) //<- Esta condición dudo que esté bien
	{
		line_size = sizeof(matrix_map[i]) / sizeof(matrix_map[i][0]);
		if (line_size != first_size)
			return ("Wrong Map!", 0);
		i++;
	}
	return(1);
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
//LEEMOS UNA LINEA, GUARDAMOS EN MATRIZ Y LIBERAMOS LO LEIDO PARA LEER OTRA LINEA
char	**ft_map(ssize_t fd)
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
	//COMPROBAMOS QUE NUESTRA MATRIZ CUMPLE LAS CONDICIONES
	conditions = ft_map_conditions(matrix_map);
}

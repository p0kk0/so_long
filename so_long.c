/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:07:48 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/15 18:42:45 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	ssize_t	fd;
	char	**map;

	fd = open("firstmap.ber", RDONLY);
	if (fd == -1)
		return ("Error openning the map.", 0);
	map = ft_map(fd);

	//COMPROBAMOS QUE NUESTRA MATRIZ CUMPLE LAS CONDICIONES
	//PINTAMOS MAPA
	//GESTIONAMOS TECLAS
	close(fd);
}
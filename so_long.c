/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch@student.42malaga.com <felsanch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:07:48 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/16 09:28:37 by felsanch@st      ###   ########.fr       */
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


	//PINTAMOS MAPA
	//GESTIONAMOS TECLAS
	close(fd);
}
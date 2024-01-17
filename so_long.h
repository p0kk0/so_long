/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:19:26 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/17 20:08:10 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <fcntl.h>
# include "get_next_line/get_next_line.h"

# define BUFFER_SIZZE 99999
# define WHIDTH 720
# define HEIGH 480

typedef struct game
{
	int	width;
	int	heigh;
}	t_game;

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch@student.42malaga.com <felsanch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:07:48 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/24 12:31:46 by felsanch@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void ft_hook(void* param)
// {
// 	mlx_t* mlx = param;

// 	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
// 		mlx_close_window(mlx);
// 	if (mlx_is_key_down(mlx, MLX_KEY_UP))
// 		image->instances[0].y -= 5;
// 	if (mlx_is_key_down(mlx, MLX_KEY_DOWN))
// 		image->instances[0].y += 5;
// 	if (mlx_is_key_down(mlx, MLX_KEY_LEFT))
// 		image->instances[0].x -= 5;
// 	if (mlx_is_key_down(mlx, MLX_KEY_RIGHT))
// 		image->instances[0].x += 5;
// }

int	main(int argc, char **argv)
{
	t_struct	st;
	//mlx_t			*game;
	//mlx_texture_t	*txt;
	//mlx_image_t		*img;
	if (argc != 2)
		return (ft_printf("Wrong Number of Arguments.\n"), 0);
	init_struct(&st);
	ft_map(&ft, argv[1]);
	
	//game = mlx_init(1280, 720, "Aguacate", false);
				//ft_load_images(&st);
	//txt = mlx_load_png("./img.png");
	//img = mlx_texture_to_image(game, txt);
	//mlx_image_to_window(game, img, 640, 370);
	//mlx_loop_hook(game, ft_game, &struct);
	//mlx_loop(game);
	//mlx_terminate(game);
			//mlx_delete_texture(txt);
	return (0);
}

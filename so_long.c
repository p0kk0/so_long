/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:07:48 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/20 17:47:10 by felsanch         ###   ########.fr       */
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
	mlx_t	*pedro;
	//t_game	st;
	mlx_texture_t	*txt;
	mlx_image_t		*img;

	(void)argv;
	if (argc != 2)
		return (ft_printf("Wrong Number of Arguments.\n"), 0);
	//ft_check();
	pedro = mlx_init(720, 480, "Aguacate", false);
	//ft_load_images(&st);
	txt = mlx_load_png("./img.png");
	img = mlx_texture_to_image(pedro, txt);
	mlx_image_to_window(pedro, img, 360, 240);
	//mlx_loop_hook(pedro, ft_game, &struct);
	mlx_loop(pedro);
	mlx_terminate(pedro);
	return (0);
}

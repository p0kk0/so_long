/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:07:48 by felsanch          #+#    #+#             */
/*   Updated: 2024/01/17 19:19:20 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	leaks(void)
{
	system("leaks -q a.out");
}

int	main(int argc, char **argv)
{
	t_game	mygame;

	atexit(leaks);
	if (argc != 2)
		return (ft_printf("Wrong Number of Arguments.\n"), EXIT_FALIURE);
	ft_map(&mygame, argv[1]);
	return (EXIT_SUCCESS);
}
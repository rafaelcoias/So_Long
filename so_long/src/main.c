/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:35:33 by rade-sar          #+#    #+#             */
/*   Updated: 2022/04/28 21:54:45 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		return (0);
	check_all(argv[1]);
	init_game(argv[1], &game);
	init_window(&game);
	init_images(&game);
	delete_images(game);
	free(game.mlx);
	if (game.map.map)
		free_map(game.map.map);
}
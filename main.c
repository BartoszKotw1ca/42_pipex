/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bkotwica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:42:23 by bkotwica          #+#    #+#             */
/*   Updated: 2024/04/22 19:05:14 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(void)
{
	int	fd = open("niema.txt", O_RDONLY | O_CREAT);
	int	fd1 = open("tmp.txt", O_RDWR | O_CREAT);
	char	*buff;
	buff = malloc(10);
	read(fd, buff, 10);
	write(fd1, buff, 10);
	printf("fd status: %d\nbuff: %s", fd, buff);
	close(fd);
	return (0);
}

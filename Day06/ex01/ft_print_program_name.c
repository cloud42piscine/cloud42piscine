/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:41:01 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/17 19:30:58 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc])
	{
		ft_putchar(argv[0][argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}

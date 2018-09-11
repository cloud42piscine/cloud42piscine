/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:41:01 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/11 14:46:52 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(c);

void ft_putstr(char *str)
{
	int i;

	while (*str)
	{
		ft_putchar(*str);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		ft_putstr(argv[0]);
		ft_putchar(\n);
	}
	return (0);
}

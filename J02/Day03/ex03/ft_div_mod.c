# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_div_mod                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgunes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 18:55:39 by dgunes            #+#    #+#              #
#    Updated: 2018/09/02 19:47:51 by dgunes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

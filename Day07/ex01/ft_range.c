/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:45:26 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/16 15:47:57 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int i;
	int *stck;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	*stck = (int *)malloc(sizeof(int) * (min - max));
	while (min < max)
	{
		stck[i] = min;
		min++;
		i++;
	}
	return (stck);
}

int main()
{
	int* res;
	int i;
	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
			printf("%d,", res[i]);
	printf("\n");

	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
			printf("%d,", res[i]);
	printf("\n");

	res = ft_range(100, 101);
	for (i = 0; i < 1; i++)
			printf("%d,", res[i]);
	printf("\n");

	res = ft_range(10, 5);
	printf("%" PRIxPTR "\n", (uintptr_t) res);
	return (0);
}
